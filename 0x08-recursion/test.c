#include "main.h"

/**
 * _sqrt_recursion - Square root by recursion.
 *
 * @n: integar parameter that you want to get the square root to it.
 *
 * Description: This function calling the function root.
 *
 * Return: root function.
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (root(n, i));
}

/**
 * root - Square root by recursion.
 *
 * @num: integar parameter that you want to get the square root to it.
 * @j: integar parameter check if the square of number is equal to num.
 *
 * Description: This function returns the natural square root of a number.
 *
 * Return: Integar number square root.
 */
int root(int num, int j)
{
	if (j * j > num)
		return (-1);

	if (j * j == num)
		return (j);

	return (root(num, j + 1));
}
