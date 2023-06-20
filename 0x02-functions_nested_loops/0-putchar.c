#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - print out _putchar
 *
 * Return: alwasy zero.
 */
int main(void)
{
	char ans[] = "_putchar";
	int i;

	for (i = 0; ans[i] != '\0'; i++)
	{
		_putchar(ans[i]);
	}
	_putchar('\n');

	return (0);
}
