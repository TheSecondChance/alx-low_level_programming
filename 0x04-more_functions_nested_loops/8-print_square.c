#include "main.h"
/**
 * print_square - function prints a square followed by new line.
 *
 * @size: arrgument t 0 or less should print.
 */
void print_square(int size)
{
	int col, row;

	if (size > 0)
	{
		for (col = 0; col < size; col++)
		{
			for (row = 0; row < size; row++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
