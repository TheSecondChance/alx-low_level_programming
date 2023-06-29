#include <stdio.h>
/**
 * reverse_array - function revers the array.
 * @a: array pointer.
 * @n: number of arry.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
