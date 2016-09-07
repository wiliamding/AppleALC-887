//
//  kern_file.cpp
//  KernelCommon
//
//  Copyright © 2016 vit9696. All rights reserved.
//

#include "kern_file.hpp"
#include "kern_util.hpp"

#include <sys/time.h>
#include <sys/vnode.h>

uint8_t *FileIO::readFileToBuffer(const char *path, size_t &size) {
	vnode_t vnode = NULLVP;
	vfs_context_t ctxt = vfs_context_create(nullptr);
	uint8_t *buf = nullptr;
	
	errno_t err = vnode_lookup(path, 0, &vnode, ctxt);
	if(!err) {
		size = readFileSize(vnode, ctxt);
		if(size > 0) {
			buf = Buffer::create<uint8_t>(size);
			if (buf) {
				if (readFileData(buf, 0, size, vnode, ctxt)) {
					SYSLOG("file @ failed to read %s file of %zu size", path, size);
					Buffer::deleter(buf);
					buf = nullptr;
				}
			} else {
				SYSLOG("file @ failed to allocate memory for reading %s file of %zu size", path, size);
			}
		} else {
			SYSLOG("file @ failed to obtain %s size", path);
		}
		vnode_put(vnode);
	} else {
		SYSLOG("file @ failed to find %s", path);
	}
	
	vfs_context_rele(ctxt);
	
	return buf;
}


int FileIO::readFileData(void *buffer, off_t off, size_t sz, vnode_t vnode, vfs_context_t ctxt) {
	int error = 0;
	
	uio_t uio = uio_create(1, off, UIO_SYSSPACE, UIO_READ);
	if (!uio) {
		SYSLOG("file @ uio_create returned null!");
		return error;
	}
	
	// imitate the kernel and read a single page from the file
	error = uio_addiov(uio, CAST_USER_ADDR_T(buffer), sz);
	if (error) {
		SYSLOG("file @ uio_addiov returned error %d!", error);
		return error;
	}
	
	// read mach vnode into the buffer
	error = VNOP_READ(vnode, uio, 0, ctxt);
	if (error) {
		SYSLOG("file @ VNOP_READ failed %d!", error);
		return error;
	}
	
	if (uio_resid(uio)) {
		SYSLOG("file @ uio_resid returned non-null!");
		return EINVAL;
	}
	
	return error;
}

size_t FileIO::readFileSize(vnode_t vnode, vfs_context_t ctxt) {
	// Taken from XNU vnode_size
	vnode_attr va;
	VATTR_INIT(&va);
	VATTR_WANTED(&va, va_data_size);
	return vnode_getattr(vnode, &va, ctxt) ? 0 : va.va_data_size;
}