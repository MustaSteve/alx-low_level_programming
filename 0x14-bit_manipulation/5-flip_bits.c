#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number
 * @n: number 1
 * @m: number 2
 * Return:  the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result_mn = n ^ m;
	unsigned int counten = 0;

	while (result_mn != 0)
	{
		counten += (result_mn & 1);
		result_mn >>= 1;
	}
	return (counten);
}
