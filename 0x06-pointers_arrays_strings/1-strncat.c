#include <stdio.h>
/**
 * _strncat - fuction concatenate two stings.
 * @dest: destination pointer
 * @src: second concatenate
 * @n: n use copy of character
 * Return: dest result.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; stc[i] != '\0'; i < n; i++, len++)
	{
		dest[len] = src[i];
	}
	return (dest);
}
