#include <stdio.h>
/**
 * main - prints number of argument.
 * @argc: passed argument.
 * @argv: pointer arry.
 * Return: zero.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
