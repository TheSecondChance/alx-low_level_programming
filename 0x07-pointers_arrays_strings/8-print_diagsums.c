#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of two diagonals.
 * @a: first element of squar
 * @size: the size of the square
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += * (a + i*size + i);
		sum2 += * (a + i*size + size - 1 - i);
	}
	printf("%d, %d\n", sum1, sum2);
}
