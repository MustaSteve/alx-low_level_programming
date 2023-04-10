#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
* is_check_n - do print
* @argc: int
* @argv: string
* Return: 0, 1
*/
int is_check_n(char *str)
{
	int x = 0;

	if (str[0] == '-')
	{
		x = 1;
	}
	for (; str[x] != '\0'; x++)
	{
		if (!isdigit(str[x]))
		{
		return (0);
		}
	}
	return (1);
}
/**
* main - do a print
* @argc: int
* @argv: string
* Return: 1, 0
*/
int main(int argc, char *argv[])
{
	int x, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		if (!is_check_n(argv[x]))
		{
		printf("Error\n");
		return (1);
		}
	}

	for (x = 1; x < argc; x++) 
	{
		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);
	return (0);
}
