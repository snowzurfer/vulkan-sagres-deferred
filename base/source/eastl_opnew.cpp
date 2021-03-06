#include <EASTL/internal/config.h>
#include <EABase/nullptr.h>
#include <cstdlib>

void* operator new[](
		size_t size,
		const char* pName,
		int flags,
		unsigned debugFlags,
		const char* file,
		int line) {
	return malloc(size);
}

void* operator new[](
		size_t size,
		size_t alignment,
		size_t alignmentOffset,
		const char* pName,
		int flags,
		unsigned debugFlags,
		const char* file,
		int line) {
	EASTL_ASSERT(alignment <= 8);
	return malloc(size);
}
