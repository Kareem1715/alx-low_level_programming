#include "main.h"

/**
 * more_numbers - Entery point
 *
 * Description: prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j, result;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			result = j;
			if (j > 9)
			{
				_putchar(1 + '0');
				result = j % 10;
			}
			_putchar(result + '0');
		}
	_putchar('\n');
	}


}
