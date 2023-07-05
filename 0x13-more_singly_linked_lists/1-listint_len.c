#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * listint_len - returns the number of elements
 * @h: singly linked list
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	int j = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		j++;
		h = h->next;
	}
	return (j);
}
