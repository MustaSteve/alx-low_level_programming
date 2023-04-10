#include <stdlib.h>
#include <stdio.h>
/**
* main - do  print
* @argc: int
* @argv: argument
* Return: 0, 1
*/
int main(int argc, char *argv[])
{
	int x = 0, y = 0, count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	y = atoi(argv[1]);
	if (y <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (x = 0; x < 5; x++)
	{
		while (y >= coins[x])
		{
			count++;
			y -= coins[x];
		}
	}
	printf("%d\n", count);
	return (0);
}
