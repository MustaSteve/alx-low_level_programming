#include "main.h"

/**
* string_nconcat - a function that concatenates two strings
* @s1: char
* @s2: char
*  @n: int
* Return: char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, p, e1 = 0, e2 = 0;
	char *s;

	while (s1 && s1[e1])
		e1++;
	while (s2 && s2[e2])
		e2++;

	s = malloc(sizeof(char) * (e1 + ((n < e2) ? n : e2) + 1));
	if (!s)
	return (NULL);

	for (a = 0; a < e1; a++) 
		s[a] = s1[a];

	for (p = 0; n < e2 && a < (e1 + n); a++, p++)
		s[a] = s2[p];

	for (; n >= e2 && a < (e1 + e2); a++, p++)
		s[a] = s2[p];

	s[a] = '\0';
	return (s);
}

