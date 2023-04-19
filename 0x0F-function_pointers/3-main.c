#include "function_pointers.h"
#include "3-calc.h"
/**
 * main - do the code
 * @argc: int
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int har1, har2;
	char *op;
	

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	har1 = atoi(argv[1]);
	op = argv[2];
	har2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
	printf("Error\n");
	exit(99);
	}

	if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
	{
		return (0);
	}

	printf("%d\n", get_op_func(op)(har1, har2));
	return (0);
}
