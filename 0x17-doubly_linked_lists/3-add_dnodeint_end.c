#include "lists.h"

/**
 * add_dnodeint_end - adds node to the end of a doubly linked list
 * @head: the head of a linked list
 * @n: the data of that d linked list to add
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_i, *tmpin = *head;

	node_i = malloc(sizeof(dlistint_t));
	if (!node_i)
	{
		return (NULL);
	}
	node_i->n = n;
	node_i->next = NULL;
	node_i->prev = NULL;
	if (*head == NULL)
	{
		*head = node_i;
		return (node_i);
	}
	while (tmpin->next)
	{
		tmpin = tmpin->next;
	}
	tmpin->next = node_i;
	node_i->prev = tmpin;
	return (node_i);
}
