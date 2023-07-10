#include <stdlib.h>
#include "main.h"
/**
 * _strdup - return pointer to a newly allocated space in memory.
 * @str: string parametr.
 * Return: copy of string pointer.
 */
char *_strdup(char *str)
{
	int count = 0, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[count] != '\0')
		count++;
	ptr = (char *)malloc((count + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= count; i++)
		ptr[i] = str[i];
	return (ptr);
}
