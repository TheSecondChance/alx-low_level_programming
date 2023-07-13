#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array.
 * @nmemb: allocates memor.
 * @size: bytes each and return pointer.
 * Return: point that allocate.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;
	return (ptr);
}
