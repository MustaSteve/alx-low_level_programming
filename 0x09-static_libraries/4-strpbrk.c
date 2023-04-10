#include "main.h"

/**
* _strpbrk - search a string
* @s: string
* @accept: accept char
*
* Return: Always 0
*/
char *_strpbrk(char *s, char *accept)
{
int j = 0;
int i = 0;

while (s[j])
{
i = 0;

while (accept[i])
{
if (s[j] == accept[i])
{
s += j;
return (s);
}

j++;
}

i++;
}

return ('\0');
}
