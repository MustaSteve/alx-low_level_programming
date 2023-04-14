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
	char *p;
	unsigned int s, i, xx1 = 0, xy2 = 0;


	while (s1 && s1[xx1])
		xx1++;
	while (s2 && s2[xy2])
		xy2++;

	p = malloc(sizeof(char) * (xx1 + ((n < xy2) ? n : xy2) + 1));
	if (!p)
	return (NULL);

	for (s = 0; s < xx1; s++)
		p[s] = s1[s];

	for (s = 0; n < xy2 && s < (xx1 + n); s++, i++)
		p[s] = s2[i];

	for (; n >= xy2 && s < (xx1 + xy2); s++, i++)
		p[s] = s2[i];

	p[s] = '\0';
	return (p);
}
