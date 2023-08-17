#include "lists.h"

/**
 * add_dnodeint - func adds node the begin a doubly linked list
 * @head: the head of a linked list
 * @n: the n data of that d linked list
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_i;

	node_i = malloc(sizeof(dlistint_t));
	if (!node_i)
	{
		return (NULL);
	}
	node_i->n = n;
	node_i->next = *head;
	node_i->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = node_i;
	}
	*head = node_i;
	return (*head);
}
