#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t.
 * @h: tht passed nodes.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
