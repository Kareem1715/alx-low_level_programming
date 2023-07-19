#include "main.h"

/**
 * main - Entry point
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

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			result = i * j;
			_putchar(',');
			_putchar('  ');

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');

		}
		_putchar('\n');
	}    
}
