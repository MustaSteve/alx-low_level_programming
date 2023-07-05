#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * delete_nodeint_at_index - deletes the node at given index .
 * @head: address of fisrt
 * @index: at which point to delete the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *tmp;
	unsigned int i;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{

		cur = *head;
		*head = (*head)->next;
		free(cur);
		return (1);
	}
	cur = *head;
	for (i = 2; i <= index && cur != NULL; i++)
	{
		cur = cur->next;
	}
	if (cur == NULL || cur->next == NULL)
		return (-1);
	tmp = cur->next;
	cur->next = cur->next->next;
	free(tmp);
	return (1);
}
