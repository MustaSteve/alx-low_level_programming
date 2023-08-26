#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int x, j;

	x = 0;
	j = 0;

	while (dest[x] != '\0')
		x++;

	while (src[j] != '\0')
	{
		dest[x] = src[j];
		j++;
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
