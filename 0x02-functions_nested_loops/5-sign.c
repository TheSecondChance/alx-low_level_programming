#include "main.h"
/**
 * print_sign - print out sign of a number
 *
 * @n: check n greater than or 0 or -1.
 *
 * Return: always 0;
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
