#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entery point
 *
 * @grid: the matrix in previous task.
 * @height: rows of matirx.
 *
 * Description: frees a 2 dimensional grid previously created.
 *
 * Return: Nothing (void function).
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
