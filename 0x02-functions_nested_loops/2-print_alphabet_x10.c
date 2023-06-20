#include "main.h"
/**
 * print_alphabet_x10 - print alphabet lowercase to 10 times
 *
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 1; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar(letter);
	}
}
