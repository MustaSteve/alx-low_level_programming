#include "main.h"
/**
* str_concat - function that concatenates two strings
* @s1: str
* @s2: str
* Return: NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	int str1, str2, x, p;
	char *l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str1 = strlen(s1);
	str2 = strlen(s2);
	l = malloc(sizeof(char) * (str1 + str2 + 1));
	if (l)
	{
		p = 0;
		x = 0;
		while (x < str1)
			l[p++] = s1[x++];
		x = 0;
		while (x < str2)
			l[p++] = s2[x++];
		l[p] = '\0';
		return (l);
	}
	else
	{
		return (NULL);
	}
}
