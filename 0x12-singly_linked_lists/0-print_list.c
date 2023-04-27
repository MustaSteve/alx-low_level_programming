#include "lists.h"
/**
 * print_list - a function that prints all the elements
 * @h: linked list
 * Return: number
 */
size_t print_list(const list_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[%d] %s\n", 0, "(nil)");
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		number++;
	}
	return (number);
}
