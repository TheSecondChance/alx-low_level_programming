#include "lists.h"
/**
 * add_dnodeint - this add new node at the beginning of a dlistint_t list
 * @head: head node
 * @n: values
 * Return: return new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_beg, *temp;

	node_beg = malloc(sizeof(dlistint_t));
	if (node_beg == NULL)
		return (NULL);
	node_beg->n = n;
	node_beg->prev = NULL;
	temp = *head;
	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}
	node_beg->next = temp;
	if (temp != NULL)
		temp->prev = node_beg;
	*head = node_beg;
	return (node_beg);
}
