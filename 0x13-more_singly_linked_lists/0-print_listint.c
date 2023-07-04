#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: singly linked list
 * Return: number of elements in a linked list
 */

size_t print_listint(const listint_t *h)
{
	int j = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		j++;
		h = h->next;
	}
	return (j);
}
