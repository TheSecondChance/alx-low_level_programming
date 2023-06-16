#include <stdio.h>
/**
 * main - print number of base 16 in lowercase followed by new line
 *
 * Return: always 0.
 *
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (letter = 'a'; letter < 'g'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
