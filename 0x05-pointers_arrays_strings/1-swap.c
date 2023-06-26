#include <stdio.h>
/**
 * swap_int - function that swaps the valuses of two integers
 * @a: fist prameter to swap
 * @b: secodn parameter to swap
 */
void swap_int(int *a, int *b)
{
	int swa;

	swa = *a;
	*a = *b;
	*b = swa;
}
