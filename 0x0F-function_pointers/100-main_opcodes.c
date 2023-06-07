#include <stdio.h>
#include <stdlib.h>
/**
 * main - do the code
 * @argc: int
 * @argv: array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a = 0, bytes;
	char *vv = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (a < bytes)
	{
		printf("%02x", vv[a] & 0xFF);
		if (a != bytes - 1)
			printf(" ");
		a++;
	}
	putchar('\n');
	return (0);
}
