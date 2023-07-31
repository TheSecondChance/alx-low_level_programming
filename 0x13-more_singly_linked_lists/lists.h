#ifndef _MAIN_LIST
#define _MAIN_LIST

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

#include <stdio.h>
#include <stdlib.h>

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
#endif
