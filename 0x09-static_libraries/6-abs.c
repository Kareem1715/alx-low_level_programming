#include "main.h"

/**
 * _abs - Entry point
 *
 * @num: Parameter passed to function.
 *
 * Return: Always 0 (Success)
 *
 * Description: compute the absaulte value of integar.
 */
int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}
