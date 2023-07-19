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
	long i, prev, preprev, sum = 0;

	prev = 2, preprev = 1;
	printf("%ld, %ld, ", preprev, prev);

	for (i = 2; i < 50; i++)
	{
		sum = prev + preprev;
        if (sum % 2 == 0)
        {
            if (i != 49)
                printf("%ld, ", sum);
            else
                printf("%ld", sum);            
        }
		preprev = prev;
		prev = sum;
	}
	printf("\n");
	return (0);
}
