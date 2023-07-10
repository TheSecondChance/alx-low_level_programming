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
	int i, j, m, count = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[count] != '\0')
		count++;
	for (i = 0; s2[i] != '\0'; i++, count++)
		s1[count] = s2[i];
	concat = (char *)malloc((count + 1) * sizeof(char));
	if (concat == NULL)
		free(concat);
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
		concat[j] = s1[j];
	for (m = 0; s2[m] != '\0'; m++, j++)
		concat[j] = s2[m];
	concat[j] = '\0';
	return (concat);
}
