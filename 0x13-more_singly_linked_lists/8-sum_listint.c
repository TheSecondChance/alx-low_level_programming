#include "lists.h"
/**
 * sum_listint - sum of all data of a listint_t liked list.
 * @head: have nodes
 * Return: the sum of all data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
