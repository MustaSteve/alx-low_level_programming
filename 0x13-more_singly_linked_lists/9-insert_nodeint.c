#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first
 * @idx: index of new node
 * @n: data for that new node
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp, *neu;

	if (head == NULL)
		return (0);

	neu = malloc(sizeof(listint_t));
	if (neu == NULL)
		return (0);
	neu->n = n;

	if (idx == 0)
	{
		neu->next = *head;
		*head = neu;
		return (*head);
	}
	tmp = *head;
	for (i = 0; i < idx - 1 && neu != NULL; i++)
		tmp = tmp->next;
	if (tmp == NULL)
	{
		free(neu);
		return (NULL);
	}
	neu->next = tmp->next;
	tmp->next = neu;
	return (neu);
}
