#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: first
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *num;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	num =(*head)->next;
	n = (*head)->n;
	free(*head);
	*head = num;

	return (n);
}
