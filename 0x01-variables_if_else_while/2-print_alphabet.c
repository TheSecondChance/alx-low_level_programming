#include <stdio.h>
/**
 * main - print alphabet lowercase
 *
 * Return: always zero.
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
