#include "main.h"
/**
 * print_number - it print number that integer.
 * @n: the number that pass
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
	}
	putchar((n % 10) + '0');
}
