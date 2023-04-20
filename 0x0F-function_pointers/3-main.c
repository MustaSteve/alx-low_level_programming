#include "3-calc.h"

/**
 * main - do the code
 * @argc: int
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, har1, har2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	har1 = atoi(argv[1]);
	har2 = atoi(argv[3]);
	result = op_func(har1, har2);

	printf("%d\n", result);
	return (0);
}
