#include "main.h"

/**
 * _isupper - check
 * @c: character
 *
 * Return: 1 if c uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

