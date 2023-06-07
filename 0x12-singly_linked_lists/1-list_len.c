#include "lists.h"
/**
 * list_len - function that returns the number of elementsa
 * @h: linked list
 * Return: number
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
