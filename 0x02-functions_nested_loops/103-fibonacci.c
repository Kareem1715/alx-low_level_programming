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
	long i, prev, preprev, sum = 0, total = 0;

	prev = 2, preprev = 1;
	for (i = 2; i < 50; i++)
	{
        if (prev % 2 == 0) /*Add the even fabonacci only*/
            total += prev;

        /*Fabonacci number*/
		sum = prev + preprev;
		preprev = prev;
		prev = sum;
    
        if (prev >= 4000000)
            break;
	}
    printf("%ld\n", total);    
	return (0);
}
