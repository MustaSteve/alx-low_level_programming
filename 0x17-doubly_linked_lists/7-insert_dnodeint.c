#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * create_dnode - create a new node
 * @n: data of node
 * @prev: link to previous node
 * @next: link to next node
 * Return: pointer to new node
 */
dlistint_t *create_dnode(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *new_i;

	new_i = malloc(sizeof(dlistint_t));
	if (new_i == NULL)
		return (NULL);
	new_i->n = n;
	new_i->prev = prev;
	new_i->next = next;
	return (new_i);
}
/**
 * insert_dnodeint_at_index - inserts a new node at a position
 * @h: head of doubly-linked list
 * @idx: index for insertion of new node
 * @n: data for new node
 * Return: address of new node or NULL if error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_i = *h, *localPrev = NULL;
	unsigned int count_i = 0;

	if (!h)
		return (NULL);
	if (idx == 0) /* insert at list beginning*/
	{
		if (!*h)
			*h = create_dnode(n, NULL, NULL); /*first node*/
		else
		{
			(*h)->prev = create_dnode(n, NULL, *h);
			*h = (*h)->prev;
		}
		return (*h);
	}
	for (current_i = *h; current_i && (count_i < idx); current_i = current_i->next, count_i++)
	{
		localPrev = current_i;
	}
	if ((count_i == idx) && (current_i == NULL)) /*insert at list end*/
	{
		localPrev->next = create_dnode(n, localPrev, NULL);
		return (localPrev->next);
	}
	if ((count_i < idx) && (current_i == NULL))/*idx too high*/
		return (NULL);
	if (localPrev != NULL)
	{       /*insert in middle of list*/
		localPrev->next = create_dnode(n, localPrev, current_i);
		current_i->prev = localPrev->next;
		return (localPrev->next);
	}
	return (NULL); /*should never run*/
}
