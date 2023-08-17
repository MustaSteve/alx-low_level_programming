#include "lists.h"

/**
 * sum_dlistint - Summery elements of a list
 * @head: the head of doublty linked list
 * Return: the summery of all the data (n) of a dlistint_t linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int count_i = 0;
	dlistint_t *current_i = head;

	if (!head)
		return (0);
	while (current_i)
	{
		count_i += current_i->n;
		current_i = current_i->next;
	}
	return (count_i);
}
