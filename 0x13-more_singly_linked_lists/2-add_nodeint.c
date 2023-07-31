#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning.
 * @head: head the first node
 * @n: argumment that passed
 * Return: address of the new element or NUL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
/**
 * print_listint - print the elemnet
 * @n: number of that print
 * Return: none
 */
listint_t print_listint(listint_t *n)
{
	listint_t *temp = n;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
