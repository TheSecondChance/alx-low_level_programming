#include <stdio.h>
/**
 * main - print 1 to 100 multiples of three print fizz multiples 5 print buzz.
 *
 * Return: always zero.
 *
 */
int main(void)
{
	int num;

	num = 1;
	printf("%d", num);
	for (num = 2; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (num % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", num);
		}
	}
	printf("\n");
	return (0);
}
