#include "main.h"

/**
 * _pow_recursion - Entery point.
 *
 * @x: integar parameter.
 * @y: integar parameter.
 *
 * Description: power function with recursion.
 *
 * Return: Integar number.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
