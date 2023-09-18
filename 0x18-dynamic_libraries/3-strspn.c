#include "main.h"
/**
 * _strspn - function gets the length.
 * @s: consist only bytes.
 * @accept: number of bytes.
 * Return: always i.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			return (i);
		}
	}
	return (i);
}
