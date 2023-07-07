#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add postive number.
 * @argc: number of command.
 * @argv: array that contains command line.
 * Return: zero.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
