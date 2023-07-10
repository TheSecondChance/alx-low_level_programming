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

	if (size == NULL)
		return (NULL);

	ptr = (char *)malloc(c * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
