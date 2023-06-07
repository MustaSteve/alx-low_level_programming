#include "main.h"
/**
 * _cheksqrt_1 - returns root of a number
 * @n: test number
 * @x: base number
 *
 * Return: the square root of n
 */
int _cheksqrt_1(int n, int x)
{
	if (n * n > x)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_cheksqrt_1(n + 1, x));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to check
 *
 * Return: root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (n);
	else if (n == 1)
		return (n);
	return (_cheksqrt_1(0, n));
}
