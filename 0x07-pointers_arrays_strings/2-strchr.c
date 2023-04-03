#include "main.h"
/**
* _strchr - locates a character in a string.
* @s: string
* @c: character
* Return: a pointer c in the string s or NULL
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s) 
		{
			return (s);
		}
		s++;
	}
	return (c == *s ? s : 0);
}
