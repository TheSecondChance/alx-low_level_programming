#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of lsit.
 * @head: the fist node
 * @n: new nodes
 * Return: new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		listint_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = new;
	}
	return (*head);

}
