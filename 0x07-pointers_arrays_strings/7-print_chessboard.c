#include "main.h"

/**
 * print_chessboard - Entery point.
 *
 * @a: string parameter.
 *
 * Description: prints the chessboard.
 *
 * Return: Nothing (void function).
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar (a[i][j]);
			
		}
		_putchar ('\n');
	}


}
