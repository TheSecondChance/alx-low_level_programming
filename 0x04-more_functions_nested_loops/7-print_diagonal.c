#include "main.h"
/**
 * print_diagonal - this print out diagonal.
 * @n: argumment to pass.
 * Return: nonne.
 */
void print_diagonal(int n)
{
	int len, spa;

	for (len = 0; len < n; len++)
	{
		for (spa = 0; spa < len; spa++)
		{
			_putchar('_');
		}
		_putchar('\\');
		_putchar('\n');
		if (len == n - 1)
		{
			continue;
		}
		_putchar('\n');
	}
}
