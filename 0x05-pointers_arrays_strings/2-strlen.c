#include <stdio.h>
/**
 * _strlen - funchion that returns the length of a string.
 * @s: pass parameter
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
