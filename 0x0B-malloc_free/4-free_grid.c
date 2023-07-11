#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2 dimensional grid previousl
 * @grid: interger grid
 * @height: the height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
