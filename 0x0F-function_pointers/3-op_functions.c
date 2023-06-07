#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: first num
 * @b: second num
 *
 * Return: sum of a&b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two numbers
 * @a: first num
 * @b: second num
 *
 * Return: dif a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multi two num
 * @a: first num
 * @b: second num
 *
 * Return: sum a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum a & b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remaind two numbers
 * @a: first num
 * @b: second num
 *
 * Return: sum a & b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
