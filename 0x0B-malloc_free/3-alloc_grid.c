#include "main.h"
/**
* alloc_grid - a function that returns a pointer
* @width: width
* @height: height
* Return: If width or height is 0  NULL
*/
int **alloc_grid(int width, int height)
{
	int x, p;
	int **grid;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			for (p = 0; p < x; p++)
			{
				free(grid[p]);
			}
		free(grid);
		return (NULL);
		}
	}
	return (grid);
}
