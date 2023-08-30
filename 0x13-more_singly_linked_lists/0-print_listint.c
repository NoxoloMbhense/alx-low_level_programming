#include "lists.h"
#include <stdio.h>

/**
 * print_listint - it prints all of the elements of a linked list
 * @h: It is the linked list of type listint_t to print
 *
 * Return: The num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
