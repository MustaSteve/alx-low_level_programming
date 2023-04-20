#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - do the code 
 * @argc: int
 * @argv: array 
 *
 * Return: 0 
 */
int main(int argc, char *argv[])
{
    int arl1, arl2, result;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    arl1 = atoi(argv[1]);
    arl2 = atoi(argv[3]);
    op_func = get_op_func(argv[2]);

    if (!op_func)
    {
        printf("Error\n");
        exit(99);
    }

    if ((*argv[2] == '/' || *argv[2] == '%') && arl2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    result = op_func(arl1, arl2);
    printf("%d\n", result);

    return (0);
}
