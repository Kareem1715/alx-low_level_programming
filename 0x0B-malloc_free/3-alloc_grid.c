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
		if (matrix[i] == NULL)
		{
			while (i--)
				free(matrix[i]);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}

	return (matrix);
}
