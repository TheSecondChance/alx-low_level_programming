#include "lists.h"
/**
 * get_nodeint_at_index - that return the nth node a linked list.
 * @head: nodes of the hea
 * @index: the index of the node starting at 0.
 * Return: head if node does not exist NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < head && index != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
