#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two num
 * @a: first number
 * @b: second number
 *
 * Return: sum a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub two num
 * @a: first number
 * @b: second number
 *
 * Return: sum a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul two num
 * @a: first number
 * @b: second number
 *
 * Return: sum a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div two num
 * @a: first number.
 * @b: second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remaind two numbers
 * @a: first number.
 * @b: second number.
 *
 * Return: sum a & b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
