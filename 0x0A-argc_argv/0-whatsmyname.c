#include <stdio.h>
/**
 * main - print its name followed by a new line.
 * @argc: number of command
 * @argv: pointer array that contains the program.
 * Return: zero.
 */
int main(int argc, __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
