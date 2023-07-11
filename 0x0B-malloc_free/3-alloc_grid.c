#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - 2 dimensional array of integer
 * @width: integer width
 * @height: integer height
 * Return: pointer of 2 dimensional
 */
int **alloc_grid(int width, int height)
{
	int **myGrid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	myGrid = (int **)malloc(height * sizeof(int *));
	if (myGrid == NULL)
	{
		free(myGrid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		myGrid[i] = (int *)malloc(width * sizeof(int));
		if (myGrid[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(myGrid[i]);
			}
			free(myGrid);
			return (NULL);
		}
	}
	return (myGrid);
}
