#include "search_algos.h"


/**
 * recursive_binary - recusrive algorithm
 * @array: first pision pointer
 * @size: array length
 * @value: search a value
 * Return: value
 */
size_t recursive_binary(int *array, size_t size, int value)
{
	size_t keml = size / 2;
	size_t lan;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (lan = 0; lan < size; lan++)
		printf("%d%s", array[lan], (lan != size - 1) ? ", " : "\n");

	if (keml && size % 2 == 0)
		keml--;
	if (value == array[keml])
		return (keml);
	if (value < array[keml])
		return (recursive_binary(array, keml, value));

	keml++;
	return (recursive_binary(array + keml, size - keml, value) + keml);
}
/**
 * binary_search - ches for a vaay
 * @array: ches for a vaayvfirst positiona rray list
 * @size: rzmet of arr
 * @value: ches for a vaay
 * Return: ches for a vaayvalue in array
 */
int binary_search(int *array, size_t size, int value)
{
	int wetat;

	wetat = recursive_binary(array, size, value);

	if (wetat >= 0 && array[wetat] != value)
		return (-1);
	return (wetat);
}
