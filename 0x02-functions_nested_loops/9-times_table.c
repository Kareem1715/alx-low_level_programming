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
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (result > 9)
				_putchar(result / 10 + '0');

			_putchar(result % 10 + '0');
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
			if (result < 10)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
