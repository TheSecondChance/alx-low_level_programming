#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning.
 * @head: head the first node
 * @n: argumment that passed
 * Return: address of the new element or NUL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
