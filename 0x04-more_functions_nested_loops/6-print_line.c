#include "main.h"
/**
 * print_line - print straight line.
 *
 * @n: pass argument n tiems the character _.
 * Return: always zero.
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
