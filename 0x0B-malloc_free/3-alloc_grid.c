#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create a two dimensional array
 * @height: a number of row
 * @width: a number of column
 * Return: NULL if it failes or a pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);/*allocate memory for rows*/
	if (grid == NULL)/* validate memory */
		return (NULL);
	for (i = 0; i < height; i++) /*allocate memory for columns of each row*/
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			*(grid[i] + j) = 0;
		}
	}
	return (grid);
}

