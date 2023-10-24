#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: Integer value of the node
 * @next: Pointer to the next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Function prototypes */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif /* LISTS_H */
