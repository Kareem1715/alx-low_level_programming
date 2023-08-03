#include "main.h"

/**
 * is_prime_number - prime number by recursion.
 *
 * @n: integar parameter you need to check it is prime or not.
 *
 * Description: This function calling the function prime.
 *
 * Return: returns prime function.
 */

int is_prime_number(int n)
{
	int i = 2;

	return (prime(n, i));

}

/**
 * prime - prime number by recursion.
 *
 * @num: integar parameter you need to check it is prime or not.
 * @j: integar parameter you need to check it is prime or not.
 *
 * Description: This function check prime number.
 *
 * Return: returns 1 if the input is a prime number, otherwise return 0.
 */
int prime(int num, int j)
{

	if (j >= num && num > 1)
		return (1);
	else if (num % j == 0 || num < 2)
		return (0);
	else
		return (prime(num, j + 1));

}
