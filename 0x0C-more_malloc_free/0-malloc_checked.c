#include "main.h"
/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of byte that allocate
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
}
