#include "3-calc.h"
/**
 * get_op_func - check the code
 * @s: argument
 * Return: 0 
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (ops[i].op != NULL || *(ops[i].op) != *s)
			
	i++;
	}
	return (ops[i].f);
}
