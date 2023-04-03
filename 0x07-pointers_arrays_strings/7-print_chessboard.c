#include "main.h"
/**
* print_chessboard - a function that prints the chessboard.
* @a: board
* Return: 0
*/
void print_chessboard(char (*a)[8])
{
	int s, p;

	for (s = 0; s < 8; s++)
	{
		for (p = 0; p < 8; p++)
		{
			putchar(a[s][p]);
		}
	putchar('\n');
	}
}
