#include "main.h"
/**
* free_grid - a function that frees a 2 dimensional grid
* @grid: grid
* @height: height
* Return: on success
*/
void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)

		x++;
	{
		free(grid[x++]);
	}
	free(grid);
}
