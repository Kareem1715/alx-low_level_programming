#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Entery point
 *
 * @width: clons of matrix.
 * @height: rows of matirx.
 *
 * Description: allocation space memory for matix with malloc.
 *
 * Return: pointer of pointer for rows and colns.
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL) /* if no space in memory to malloc */
		{ /* free the colns, rows and return NULL */
			while (i--)
				free(matrix[i]);

			free(matrix);
			return (NULL);
		}

		for (j = 0; j < width; j++) /* if the allocation is done */
			matrix[i][j] = 0; /* malloc all indix with zeros */
	}


	return (matrix);
}
