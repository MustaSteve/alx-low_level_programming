#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks a system for endians
 * Return: 0 if big endian and if little 1
 */
int get_endianness(void)
{
	unsigned int xval = 1;
	char *p = (char *)&xval;

	return (*p == 1);
}
