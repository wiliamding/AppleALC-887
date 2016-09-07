//
//  kern_util.hpp
//  KernelCommon
//
//  Copyright © 2016 vit9696. All rights reserved.
//

#ifndef kern_util_hpp
#define kern_util_hpp

#include <libkern/libkern.h>
#include <mach/vm_prot.h>

extern bool debugEnabled;
extern bool lowMemory;

#define xStringify(a) Stringify(a)
#define Stringify(a) #a

#ifndef SYSLOG
#define SYSLOG(str, ...) printf( xStringify(PRODUCT_NAME) ": " str "\n", ## __VA_ARGS__)

#ifdef DEBUG
#define DBGLOG(str, ...)													\
	do {																	\
		if (debugEnabled)													\
			printf( xStringify(PRODUCT_NAME) ": (DEBUG) " str "\n", ## __VA_ARGS__);		\
	} while(0)
#else
#define DBGLOG(str, ...) do { } while(0)
#endif
#endif /* defined(SYSLOG) */

/**
 *  @brief  Two-way substring search
 *
 *  @param stack    String to search in
 *  @param needle   Substring to search for
 *  @param len      Length of substring
 *
 *  @return substring address if there or nullptr
 */
const char *strstr(const char *stack, const char *needle, size_t len=0);

/**
 *  @brief  C-style memory management from libkern, missing from headers
 */
extern "C" {
	void *kern_os_malloc(size_t size);
	void *kern_os_calloc(size_t num, size_t size);
	void kern_os_free(void* addr);
	void *kern_os_realloc(void* addr, size_t nsize);
}

/**
 *  Typed buffer allocator
 */
namespace Buffer {
	template <typename T>
	T *create(size_t size) {
		return new T[size];
	}
	
	template <typename T>
	void deleter(T *buf) {
		delete[] buf;
	}
}

/**
 *  Dynamically allocated page
 */
struct Page {
	/**
	 *  Allocates a page
	 *
	 *  @return true on success
	 */
	bool alloc();
	
	/**
	 *  Sets page protection
	 *
	 *  @param prot protection bitmask
	 *
	 *  @return true on success
	 */
	bool protect(vm_prot_t prot);
	
	/**
	 *  Deletes the page
	 *
	 *  @param p page
	 */
	static void deleter(Page *p);
	
	/**
	 *  Creates a page object
	 *
	 *  @return pointer to new page object or nullptr
	 */
	static Page *create();
	
	/**
	 *  Page buffer
	 */
	uint8_t *p {nullptr};
};

/**
 *  Embedded vector-like container
 *  You muse call deinit before destruction
 *
 *  @param T        held type
 *  @param deleter  type destructor
 */
template <typename T, void (*deleter)(T)>
class evector {
	T *ptr {nullptr};
	size_t cnt {0};
public:
	/**
	 *  Return evector size
	 *
	 *  @return element count
	 */
	const size_t size() const {
		return cnt;
	}
	
	/**
	 *  Return last element id
	 *
	 *  @return element id
	 */
	const size_t last() const {
		return cnt-1;
	}
	
	/**
	 *  Return evector element
	 *
	 *  @param index array index
	 *
	 *  @return the element at provided index
	 */
	T &operator [](size_t index) {
		return ptr[index];
	}
	
	/**
	 *  Erase evector element
	 *
	 *  @param index element index
	 *
	 *  @return true on success
	 */
	bool erase(size_t index) {
		// Free the memory
		deleter(ptr[index]);
		// Shift the items
		for (size_t i = index+1; i < cnt; i++) ptr[i-1] = ptr[i];
		// Reduce the memory used
		cnt--;
		if (cnt == 0) {
			kern_os_free(ptr);
			ptr = nullptr;
		} else {
			T *nPtr = static_cast<T *>(kern_os_realloc(ptr, (cnt)*sizeof(T *)));
			if (nPtr) {
				ptr = nPtr;
			} else {
				return false;
			}
		}

		return true;
	}
	
	/**
	 *  Add an element to evector end
	 *
	 *  @param &element an element to add
	 *
	 *  @return true on success
	 */
	bool push_back(T &element) {
		T *nPtr = static_cast<T *>(kern_os_realloc(ptr, (cnt+1)*sizeof(T *)));
		if (nPtr) {
			ptr = nPtr;
			ptr[cnt] = element;
			cnt++;
			return true;
		}
		
		SYSLOG("evector @ insertion failure");
		return false;
	}
	
	/**
	 *  Add an element to evector end
	 *
	 *  @param &element an element to add
	 *
	 *  @return true on success
	 */
	bool push_back(T &&element) {
		T *nPtr = static_cast<T *>(kern_os_realloc(ptr, (cnt+1)*sizeof(T *)));
		if (nPtr) {
			ptr = nPtr;
			ptr[cnt] = element;
			cnt++;
			return true;
		}
		
		SYSLOG("evector @ insertion failure");
		return false;
	}
	
	evector() = default;
	evector(const evector &) = delete;
	evector operator =(const evector &) = delete;
	
	/**
	 * Free the used memory
	 */
	void deinit() {
		if (ptr) {
			for (size_t i = 0; i < cnt; i++) {
				deleter(ptr[i]);
			}
			kern_os_free(ptr);
			ptr = nullptr;
		}
	}
};

#endif /* kern_util_hpp */
