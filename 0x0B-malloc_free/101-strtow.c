#include <stdlib.h>
#include "main.h"
/**
 * strtow - splits a string ino words.
 * @str: string parameter
 * Return: pointer of new allocate.
 */
char **strtow(char *str)
{
	char **words = NULL;
	int i, k, j, len = 0, wordCount = 0, start = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			wordCount++;
	}
	words = (char **)malloc((wordCount + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			start = i;
	}
	if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
	{
		len = i - start + 1;
		words[j] = (char *)malloc((len + 2) * sizeof(char));
		if (words[j] == NULL)
		{
			for  (i = 0; i < j; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
	for (k = 0; k < len; k++)
	{
		words[j][k] = str[start + k];
	}
	words[j][len] = '\0';
	j++;
	}
	words[j] = NULL;
	return (words);
}
