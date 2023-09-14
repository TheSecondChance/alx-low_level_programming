#ifndef LISTS
#define LISTS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t print_dlistint(const dlistint_t *h);
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Alx project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
#endif
