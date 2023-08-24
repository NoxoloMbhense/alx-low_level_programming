#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns no. of elements in a linked list
 * @h: pointer to list_t list
 *
 * Return: no. of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
