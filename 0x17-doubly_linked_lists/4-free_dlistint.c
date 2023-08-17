#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_i, *tmpin;

	current_i = head;
	if (current_i == NULL)
		return;
	while (current_i)
	{
		tmpin = current_i;
		current_i = current_i->next;
		free(tmpin);
	}
}
