#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/**
 * struct listint_s - it's singel list
 * @n: this is the interger
 * @index: it's singel list
 * @next: next pointer
 * Description: node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked
 * @n: it's integer
 * @index: the list
 * @next: the next pointer
 * @express: the next pointer
 * Description: he next pointere list
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
