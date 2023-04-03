#include "main.h"
/**
* _strspn - a function that gets the length of a prefix substring.
* @accept: string
* @s: segment
* Return: the number of bytes s from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	const char *j;
	const char *a;
	unsigned int count = 0;

	for (j = s; *j != '\0'; j++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*j == *a)
			{
			count++;
			break;
			}
		}
		if (*a == '\0')
		{
		break;
		}
	}
	return (count);
}
