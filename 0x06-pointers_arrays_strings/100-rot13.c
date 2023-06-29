#include "main.h"
/**
 * rot13 - that replace a letter with the 13th.
 * @s: that pass argument
 * Return: s result.
 */
char *rot13(char *s)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[count] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[count] == alphabet[i])
			{
				s[count] = rot13[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
