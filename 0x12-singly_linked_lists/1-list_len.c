#include "lists.h"
/**
 * list_len - function that returns the number of elementsa
 * @h: linked list
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t numero = 0;

	while (h != NULL)
	{
		h = h->next;
		numero++;
	}
	return (numero);
}
