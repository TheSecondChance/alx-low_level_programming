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
#include <string.h>

size_t print_listint(const listint_t *h);

#endif