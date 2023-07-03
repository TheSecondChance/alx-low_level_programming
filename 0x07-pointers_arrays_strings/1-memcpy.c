<include "main.h"
/**
 * _memcpy - fuction that copy the src tod dest.
 * @dest: argument first
 * @src: second argumetn pass
 * @n: finaly pass argument
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
