#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *nue;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		nue = *head;
		*head = (*head)->next;
		free(nue);
	}
	*head = NULL;
}
