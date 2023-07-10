#include "main.h"
/**
 * create_array - creates an array of chars.
 * @size: initializes size.
 * @c: character.
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	int i;

	if (size == NULL)
		return (NULL);
	for (i = 0; i < size; i++);
	char *ptr = (char*)malloc((i + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
