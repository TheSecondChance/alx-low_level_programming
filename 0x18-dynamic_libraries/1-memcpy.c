#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: argument first
 * @src: second argumetn pass
 * @n: finaly pass argument
 * Return: dest poiner.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
