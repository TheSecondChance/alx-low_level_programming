#include <stdio.h>
/**
 * main - That print single digit numbers of base 10 starting from 0.
 *
 * Return: always zero.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");

	return (0);
}
