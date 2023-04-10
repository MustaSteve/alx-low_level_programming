#include "main.h"
/**
 * _strlen - returns string
 * @s: string
 * Return: 0
 */
int _strlen(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
		str++;
		s++;
	}

	return (str);
}
