#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - a list
 * @head: 1rst
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *nue;

	while (head != NULL)
	{
		nue = head;
		head = head->next;
		free(nue);
	}
}
