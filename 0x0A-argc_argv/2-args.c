#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of argument.
 * @argv: pointer arry.
 * Return: alwayz zero.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
