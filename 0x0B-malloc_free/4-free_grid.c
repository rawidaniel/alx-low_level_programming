#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the allocated memory for 2 dimensinal array
 * @grid: a pointer
 * @height: the number of rows
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
