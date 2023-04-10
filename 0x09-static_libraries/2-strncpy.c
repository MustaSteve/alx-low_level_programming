#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: string
 * @src: string
 * @n: string value
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s;

	s = 0;
	while (s < n && src[s] != '\0')
	{
		dest[s] = src[s];
		s++;
	}
	while (s < n)
	{
		dest[s] = '\0';
		s++;
	}

	return (dest);
}
