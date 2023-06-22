#include "main.h"
/**
 * more_numbers - print 10 times the numbers form 0 to 14.
 *
 * Return: alwasy zero.
 */
void more_numbers(void)
{
	int num;
	int num2;

	for (num = 1; num <= 10; num++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			if (num2 >= 10)
			{
				_putchar(num2 / 10 + '0');
			}
			_putchar(num2 % 10 + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
