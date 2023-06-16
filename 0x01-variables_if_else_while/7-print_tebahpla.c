#include <stdio.h>
/**
 * main - print alphabet lowercase in reverse followed by a new line.
 *
 * Return: always 0.
 *
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
