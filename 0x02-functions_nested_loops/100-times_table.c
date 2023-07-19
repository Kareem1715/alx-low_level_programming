#include "main.h"

/**
 * print_times_table - Entry point
 *
 * @n: times table number
 *
 * Return: Always 0 (Success)
 *
 * Description: print times table
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				result = i * j;

				if (result <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (result > 9 && result <= 99)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
				}
				else if (result > 99)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
					continue;
				}

				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}

}
