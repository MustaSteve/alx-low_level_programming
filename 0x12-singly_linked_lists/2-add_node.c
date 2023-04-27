#include "lists.h"
/**
 * add_node - a function that adds a new node
 * @head: head
 * @str: string
 * Return: new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->len = strlen(str);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->next = *head;
	*head = temp;
	return (temp);
}
