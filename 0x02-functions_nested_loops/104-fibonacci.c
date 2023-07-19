#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Description: Fibonacci of number
 */
int main(void)
{
	int i;
	unsigned long fibo1, fibo2, sum,
	fibo1_nd, fibo2_nd, sum1, sum2, sum3;

	fibo1 = 1, fibo2 = 2; 
	printf("%lu, %lu, ", fibo1, fibo2);

	for (i = 2; i < 92; i++)
	{
		sum = fibo1 + fibo2;
		printf("%lu, ", sum);
		fibo1 = fibo2;
		fibo2 = sum;
	}

	for (i = 92; i < 98; i++)
	{
		sum1 = (fibo1 + fibo2) / 10000000000;
		sum2 = (fibo1 + fibo2) % 10000000000;
		sum3 = fibo1_nd + fibo2_nd + sum1;
		fibo1_nd = fibo2_nd;
		fibo2_nd = sum3;
		fibo1 = fibo2;
		fibo2 = sum2;
		printf("%lu%lu", fibo2_nd, fibo2);

		if (i != 97)
			printf(", ");
	}

	printf("\n");
	return (0);
}
