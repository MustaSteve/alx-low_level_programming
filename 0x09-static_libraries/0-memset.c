#include "main.h"

/**
* _memset - Fill memory with a constant byte
* @s: memory area to fill
* @b: constant byte to fill
* @n: bytes of memory area to fill
*
* Return: the memory area filled
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int d;


for (d = 0; d < n; d++)
{
s[d] = b;
}
return (s);
}