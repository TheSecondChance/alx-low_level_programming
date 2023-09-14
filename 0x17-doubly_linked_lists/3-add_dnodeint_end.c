#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *find_last = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (find_last)
	{
		while (find_last->next)
			find_last = find_last->next;
		new_node->prev = find_last;
		find_last->next = new_node;
	}
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}

	return (new_node);
}
