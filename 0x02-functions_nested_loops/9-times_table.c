#include <stdio.h>
#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0.
*
* Return: void
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j < 10)
			{
				if ((j * i) < 10 && j > 0)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
				else if ((j * i) > 9)
				{
					putchar(',');
					putchar(' ');
				}
				}
				printf("%i", j * i);
		}
		putchar('\n');
	}
}
