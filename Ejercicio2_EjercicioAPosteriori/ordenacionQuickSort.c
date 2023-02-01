#include <assert.h>

int compare(const void* a, const void* b){
	assert(a != NULL && b != NULL);

	return (*(int*)a - *(int*)b);
}
