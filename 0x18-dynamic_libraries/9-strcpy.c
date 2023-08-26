#include "main.h"
#include <stdio.h>

/**
  * char *_strcpy - a function that copies the string pointed to by src
  *@dest: copy to
  *@src: copy from
  *Return: string
  */
char *_strcpy(char *dest, char *src)
{
	int p = 0;
	int m = 0;

	while (*(src + p) != '\0')
	{
		p++;
	}
	for (; m < p ; m++)
	{
		dest[m] = src[m];
	}
	dest[p] = '\0';
	return (dest);
}
