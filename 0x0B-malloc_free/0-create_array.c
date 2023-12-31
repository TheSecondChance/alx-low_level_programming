#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars.
 * @size: initializes size.
 * @c: character.
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * sizeof(c));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
