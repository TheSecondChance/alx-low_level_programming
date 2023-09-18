#include <stdio.h>
/**
 * _strcmp - function that compare to string.
 * @s1: arguments and store the result
 * @s2: arguments and sotere the result.
 * Return: both arrays.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
