#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: first
 * @n: data
 * Return: the address of the new element  NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *nue;

	if (new_node == NULL)
		return (0);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		nue = *head;
		while (nue->next != NULL)
		{
			nue = nue->next;
		}
		nue->next = new_node;
	}
	return (new_node);
}
