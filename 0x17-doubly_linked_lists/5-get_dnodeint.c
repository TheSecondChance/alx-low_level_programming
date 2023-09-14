#include "lists.h"

/**
 * get_dnodeint_at_index - returns of a dlistint_t linked list.
 * @head: pointer to the list in this
 * @index: the index of node.
 * Return: if the node doesn't
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currentNode = head;
	unsigned int count = 0;

	while (currentNode && count != index)
	{
		count++;
		currentNode = currentNode->next;
	}
	if (currentNode && count == index)
		return (currentNode);
	return (NULL);
}
