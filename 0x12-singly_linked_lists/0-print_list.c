#include "lists.h"
/**
 * print_list - a function that prints all the elements
 * @h: linked list
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->sr == NULL)
		printf("[%d] %s\n", 0, "(nil)");
		else
		printf("[%d] %s\n", h->len, h->sr);
		h = h->next;
		count++;
	}
	return (count);
}
