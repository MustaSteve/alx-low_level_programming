#include <stdio.h>
/**
* main - do the print
* @argv: array
* @argc: int
* Return: 0
*/
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int a;

	while (a < argc)
	{
		printf("%s\n", argv[a++]);
	}
	return (0);
}
