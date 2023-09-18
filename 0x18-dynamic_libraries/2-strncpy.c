#include <stdio.h>
/**
 * _strncpy - function copy string.
 * @dest: destination string coped string.
 * @src: the characters to be copied to dest.
 * @n: number of characters to be copied from src to dest.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
