#include "main.h"


/**
 * times_table - Entry point for function timetables.
 *
 * Return: Always 0 (Success)
 *
 * Description: times table from 0 to 9.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			result = i * j;
			_putchar(',');
			_putchar(' ');

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');

		}
		_putchar('\n');
	}
}
