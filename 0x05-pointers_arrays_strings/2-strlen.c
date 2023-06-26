#include <stdio.h>
/**
 * _strlen - tunchion that returns the length of a string.
 * @s: pass parameter
 *
 * Return: length of character
 */
int _strlen(char *s)
{
	int len;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
