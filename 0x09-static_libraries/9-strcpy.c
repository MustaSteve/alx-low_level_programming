#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * _strcpy - Copies a string
 *
 * @dest: string
 * @src: string
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
int n = 0;

while (src[n] != '\0')
{
dest[n] = src[n];
n++;
}
dest[n] = '\0';

return (dest);
}
