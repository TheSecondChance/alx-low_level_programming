#include <stdli.h>
#include "main.h"
/**
 * str_concat - concatenate two string
 * @s1: first string.
 * @s2: second string
 * Return: pointe that have concat.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, count = 0;
	char *concat;

	while (s1[count] != '\0')
		count++;
	for (i = 0; s2[i] != '\0'; i++, count++)
		s1[count] = s2[i];
	concat = (char *)malloc(count * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (j = 0; j < count; j++)
		concat[j] = s1[count];
	return (concat);
}
