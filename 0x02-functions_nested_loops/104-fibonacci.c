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
     long double i, prev, preprev, sum = 0;

	prev = 2, preprev = 1;
	printf("%Lf, %Lf, ", preprev, prev);

	for (i = 2; i <= 98; i++)
	{
		sum = prev + preprev;
		if (i != 98)
			printf("%Lf, ", sum);
		else
			printf("%Lf", sum);

		preprev = prev;
		prev = sum;
	}
	printf("\n");
	return (0);
}
