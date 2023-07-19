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
	fibo1_nd = 0, fibo2_nd = 0, sum1, sum2, sum3;

	fibo1 = 1, fibo2 = 2;
	printf("%lu, %lu, ", fibo1, fibo2);

	for (i = 2; i < 98; i++)
	{
		if ((fibo1 + fibo2) > 10000000000 && fibo1_nd > 0 && fibo2_nd > 0)
		{
			sum1 = (fibo1 + fibo2) / 10000000000;
			sum2 = (fibo1 + fibo2) % 10000000000;
			sum3 = fibo1_nd + fibo2_nd + sum1;
			fibo1_nd = fibo2_nd;
			fibo2_nd = sum3;
			fibo1 = fibo2;
			fibo2 = sum2;
			printf("%lu%010lu", fibo2_nd, fibo2);
			/**
			 * I add 010 between % and lu means that (0 --> 10) add leading zeros
			 * for 10 length of digit if number has zero at the begin of digit after modulus
			 * because modulus ignore zero so we add leading zero if any.
			 * example: 20365011074 when we make the division to 10^10 --> 2.0365011074 we take 2
			 * and when we make the modulus to 10^10 --> 365011074 and ignore the 0 in the begin
			 *
			 */
		}
		else
		{
			sum = fibo1 + fibo2;
			printf("%lu", sum);
			fibo1 = fibo2;
			fibo2 = sum;
		}
		if (i != 97)
			printf(", ");
	}

	printf("\n");
	return (0);
}
