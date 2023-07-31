#include "lists.h"
/**
 * free_listint - function that free a list.
 * @head: that frees nodes
 * Return: none it's void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
