#include <stdio.h>
#include "main.h"

int _isdigit(int c);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return:  the converted number, or 0 if:
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nm = 0;
	int dc = 1, j = 0, len;

	if (b == NULL)
		return (0);
	while (b[j])
	{
		if (!_isdigit(b[j]))
			return (0);
		j++;
	}

	for (len = j - 1; len >= 0; len--)
	{
		if (b[len] == '1')
			nm += dc;
		dc *= 2;
	}
	return (nm);
}


/**
 * _isdigit - checks for a digit
 * c: nm
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	return (0);
}
