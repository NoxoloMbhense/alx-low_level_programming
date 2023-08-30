#include "lists.h"

/**
 * sum_listint - The calculation of the sum of all the data in  listint_t list
 * @: Is first node in the linked list
 *
 * Return: The resulting sum
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
