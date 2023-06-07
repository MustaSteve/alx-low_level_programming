#include "main.h"

/**
* _memcpy - fills memory area
* @dest: memory area
* @src: source memory area
* @n: memory area to copy
*
* Return: memory area replaced
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int p;

for (p = 0; p < n; p++)
{
dest[p] = src[p];
}

return (dest);
}
