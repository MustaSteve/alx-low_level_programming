#include "main.h"

/**
 * char *_strcpy - copies the string
 * @dest: char
 * @src: string
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int i = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; i < a ; i++)
	{
		dest[i] = src[i];
	}
	dest[a] = '\0';
	return (dest);
}
