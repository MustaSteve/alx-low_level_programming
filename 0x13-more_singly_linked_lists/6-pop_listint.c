#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: first
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;

	return (n);
}
