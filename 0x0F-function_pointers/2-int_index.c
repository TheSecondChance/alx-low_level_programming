#include "function_pointers.h"
/**
 * int_index - function searches for integer
 * @array: array that searched.
 * @size: size of array
 * @cmp: pointer function.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		return (-1);
		for (i = 0; i < size; i++)
			if (cop(array[i]))
				return (i);
	}
	return (-1);
}
