#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Description: Fabonacci of number
 */
int main(void)
{
	unsigned long i, prev, preprev, sum = 0;

	prev = 2, preprev = 1;
	printf("%lu, %lu, ", preprev, prev);

	for (i = 2; i <= 98; i++)
	{

		if (prev > 1000000000000000000 && preprev > 1000000000000000000)
		{
			printf("%lu", prev / 10000000000);

			printf("%lu", prev / 10000000000);
			printf("%lu, ", prev % 1000000000);
		}
		sum = prev + preprev;
		if (i != 98)
			printf("%lu, ", sum);


		preprev = prev;
		prev = sum;
	}
	printf("\n");

	return (0);
}
