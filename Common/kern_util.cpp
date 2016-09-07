//
//  kern_util.cpp
//  KernelCommon
//
//  Copyright © 2016 vit9696. All rights reserved.
//

#include "kern_util.hpp"

#include <sys/types.h>
#include <libkern/libkern.h>
#include <mach/vm_map.h>

bool debugEnabled = false;
bool lowMemory = false;
extern vm_map_t kernel_map;

const char *strstr(const char *stack, const char *needle, size_t len) {
	if (!len && !(len = strlen(needle))) {
		return stack;
	}
	
	const char *i = needle;

	while (*stack) {
		if (*stack == *i) {
			i++;
			if (i - needle == len)
				return stack - len + 1;
		} else {
			i = needle;
		}
		stack++;
	}
	
	return nullptr;
}

extern "C" void *kern_os_calloc(size_t num, size_t size) {
	return kern_os_malloc(num * size); // malloc bzeroes the buffer
}


bool Page::alloc() {
	if (p && vm_deallocate(kernel_map, reinterpret_cast<vm_address_t>(p), PAGE_SIZE) != KERN_SUCCESS)
		return false;
	return vm_allocate(kernel_map, reinterpret_cast<vm_address_t *>(&p), PAGE_SIZE, VM_FLAGS_ANYWHERE) == KERN_SUCCESS;
}

bool Page::protect(vm_prot_t prot) {
	if (!p) return false;
	
	return vm_protect(kernel_map, reinterpret_cast<vm_address_t>(p), PAGE_SIZE, FALSE, prot) == KERN_SUCCESS;
}

Page *Page::create() {
	return new Page;
}

void Page::deleter(Page *i) {
	if (i) {
		if (i->p)
			vm_deallocate(kernel_map, reinterpret_cast<vm_address_t>(i->p), PAGE_SIZE);
		delete i;
	}
}