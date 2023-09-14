#include "lists.h"
/**
 * print_dlistint - print the elements of a dlistint_t
 * @h: pointer of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%i\n", node->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
