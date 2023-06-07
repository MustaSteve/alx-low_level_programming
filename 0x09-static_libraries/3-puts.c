#include "main.h"

/**
* _puts - prints a string
* @str: string to print
*/
void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
		_putchar('\n');
}
