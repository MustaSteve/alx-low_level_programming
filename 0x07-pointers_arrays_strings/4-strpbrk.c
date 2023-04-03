#include "main.h"
/**
* _strpbrk -  function locates the first occurrence in the string s.
* @s: string
* @accept: array
* Return: a pointer to s in accept or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (0);
}
