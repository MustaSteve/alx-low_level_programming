#include <stdio.h>
#include <stdlib.h>
/**
* main - do the print
* @argv: array
* @argc: int
* Return: 0
*/
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	long c, x;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	c = atol(argv[1]);
	x = atol(argv[2]);
	printf("%li\n", c * x);
	return (0);
	}
}
