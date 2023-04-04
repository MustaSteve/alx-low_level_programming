#include "main.h"
/**
* _strstr - finds the first occurrence of the
*       substring needle in the string haystack
*       The terminating null bytes (\0) are not compared
* @haystack: string
* @needle: string
* Return: a pointer to the beginning of the located substring
*       or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')

	{
		char *a = haystack, *p = needle;

		while (*a == *p && *p != '\0')
		{
			a++, p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
