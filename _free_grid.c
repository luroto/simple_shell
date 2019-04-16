#include "shell.h"
/**
 *free_grid - function that frees a 2 dimensional grid
 *
 *@grid: grid to free
 *@height: number of row
 */
void free_grid(char **grid, int height)
{
	int cont = 0;

	if (grid != NULL || height > 1)
	{
		while (cont < height)
		{
			free(grid[cont]);
			cont++;
		}
	}
}
