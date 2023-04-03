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
	while (*needle != '\0')

	{
		char *a = haystack, *j = needle;

		while (*a == *j && *j != '\0')
		{
			a++, j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
