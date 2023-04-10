#include "main.h"

/**
 * _strcat - concatenates 2 strings.
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
char *i = dest;
while (*i)
i++;
while (*src)
*i++ = *src++;
*i = '\0';
return (dest);
}
