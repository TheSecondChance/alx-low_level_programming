#include <stdio.h>
/**
 * main - print digit number using putchar.
 *
 * Return: always 0.
 *
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
