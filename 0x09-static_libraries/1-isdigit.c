#include "main.h"

/**
 * _isdigit -  check digit
 * @c: character
 * Return: if digit 1 otherwise 0
 */
int _isdigit(int c)
{

	if (c >= 0 && c <= 10)
	{
		return (1);
	}
	return (0);
}
