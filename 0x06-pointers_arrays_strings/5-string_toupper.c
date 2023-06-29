#include <stdio.h>
/**
 * string_toupper - function that change to uppercase.
 * @upp: arrgument that pass.
 * Return: upp the result.
 */
char *string_toupper(char *upp)
{
	int i = 0;

	while (upp[i] != '\0')
	{
		if (upp[i] >= 97 && upp[i] <= 122)
		{
			upp[i] = upp[i] - 32;
		}
		i++;
	}
	return (upp);
}
