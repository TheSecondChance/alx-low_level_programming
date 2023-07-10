#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenate two string
 * @s1: first string.
 * @s2: second string
 * Return: pointe that have concat.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, m, co1 = 0, co2 = 0, lim;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[co1] != '\0')
		co1++;
	while (s2[co2] != '\0')
		co2++;
	concat = (char *)malloc((co1 + co2) * sizeof(char));
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}
	for (j = 0; j < co1; j++)
		concat[j] = s1[j];
	lim = co2;
	for (m = 0; m <= lim; m++, j++)
		concat[j] = s2[m];
	return (concat);
}
