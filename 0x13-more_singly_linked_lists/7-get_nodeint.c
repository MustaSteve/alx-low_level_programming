#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the node
 * @head: first
 * @index: the index of the node
 * Return: nth node 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	for (j = 0; j < index; j++)
	{
		if (tmp->next == NULL)
			return (0);
		tmp = tmp->next;
		head = tmp;
	}
	return (head);
}
