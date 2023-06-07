#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: source string
 * @n: characters to be appended from str
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
char *a = dest;
while (*a)
a++;
while (n-- && *src)
*a++ = *src++;
*a = '\0';
return (dest);
}
