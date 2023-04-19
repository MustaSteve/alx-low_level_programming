#include "3-calc.h"

/**
 * op_mul - add two numbers
 * @a: 1 number
 * @b: 2 number
 * Return: sum a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_add - return 2 numbers
 * @a: 1 number
 * @b: 2 number
 * Return: result a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return 2 number
 * @a: 1 number
 * @b: 2 number
 * Return: result a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - return 2 numbers
 * @a: 1 number
 * @b: 2 number
 * Return: result a & b
 */
int op_div(int a, int b)
{
	if (b == 0)
	return (a / b);
}

/**
 * op_mod - return 2 numbers
 * @a: 1 number
 * @b: 2 number
 * Return: result a & b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
