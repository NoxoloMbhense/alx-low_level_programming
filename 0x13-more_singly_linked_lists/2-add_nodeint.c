#include "lists.h"

/**
 * add_nodeint -  a new no deis added at the beginning of a linked list
 * @h: pointer to the first node in the list
 * @n: IT is data to insert in new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
