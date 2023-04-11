#include "main.h"
/**
 * _strdup - do a thing
 * @str: string
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int x, len;
	char *n;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	n = malloc(sizeof(char) * (len + 1));

	if (n)
	{
		x = 0;
		while (x < len)
		{
			n[x] = str[x];
			x++;
		}
		n[x] = '\0';
		return (n);
	}
	else
	{
		free(n);
		return (NULL);
	}
}
