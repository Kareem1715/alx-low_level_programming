#include "main.h"

/**
 * _islower - check the code.
 *
 * @c: integar parameter recieved by function
 *
 * Description: chdeck if the char is lower or not.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}
