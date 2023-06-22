#include "main.h"
/**
 * print_numbers - it's print number 0 to 9.
 *
 * Return: always 0.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + 48);
	}
	_putchar('\n');
}
