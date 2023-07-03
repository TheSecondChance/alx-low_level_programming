#include "main.h"
/**
 * _strpbrk - string any of set byte
 * @s: fist string.
 * @accept: last string
 * Return: pointer to the byte.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
