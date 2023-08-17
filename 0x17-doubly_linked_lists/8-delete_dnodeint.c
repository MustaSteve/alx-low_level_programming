#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete node to given index
 * @head:lists
 * @index:given index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *start_i;
	unsigned int j;
	unsigned int len_i;

	len_i = len_node(head);
	start_i = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		start_i = start_i->next;
		free(*head);
		*head = start_i;
		if (start_i != NULL)
			start_i->prev = NULL;
		return (1);
	}
	for (j = 0; j <= index - 1; j++)
	{
		start_i = start_i->next;
		if (!start_i)
			return (-1);
	}
	if (len_i - 1 == index)
	{
		start_i->prev->next = NULL;
		free(start_i);
		return (1);
	}
	start_i->prev->next = start_i->next;
	start_i->next->prev = start_i->prev;
	free(start_i);
	return (1);
}

/**
 * len_node - list len
 *
 * @node:list
 * Return:unsigned int
 */
unsigned int len_node(dlistint_t **node)
{
	unsigned int len_i = 0;
	dlistint_t *start_i;

	start_i = *node;
	while (start_i != NULL)
	{
		len_i += 1;
		start_i = start_i->next;
	}
	return (len_i);
}
