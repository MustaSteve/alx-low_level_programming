#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - returns a number of elements in a doubly linked list
 * @h: doubly linked list
 * Return: number of elements in a d linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}
	return (j);
}
