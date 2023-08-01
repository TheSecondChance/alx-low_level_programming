#include "lists.h"
/**
 * free_listint2 - function that frees a list.
 * @head: free parammeter
 *
 * Return: none in this time
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (head)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	*head = NULL;
}
