#include "lists.h"

/**
 * get_dnodeint_at_index - get elemet at index
 * @head: the head of doubly linked list
 * @index: the index where to get it
 * Return: the noth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;
	dlistint_t *current_i = head;

	if (head == NULL)
		return (NULL);
	while (current_i && j < index)
	{
		current_i = current_i->next;
		j++;
	}
	if (j == index && current_i)
		return (current_i);
	else
		return (0);
}
