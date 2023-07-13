#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second strig
 * @n: amonte of bytes.
 * Return: conten s1 and n bytes of s2 and null termintor.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, co1 = 0, co2 = 0;

	if (s1 == NULL)
		return (s1 = "");
	if (s2 == NULL)
		return (s2 = "");

	while (s1[co1] != '\0')
		co1++;
	while (s2[co2] != '\0')
		co2++;

	if (n >= co2)
		n = co2;

	concat = malloc((co1 + n + 1) * sizeof(char);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < two; i++)
		if (i < co1)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - co1];
	concat[i] = '\0';
	return (concat);
}
