#include "main.h"

/**
 * _isalpha - check the code.
 *
 * @c: Parametrs recieved by calling the function.
 *
 * Return: Depend on the return value is alpha or not.
 */

int _isalpha(int c)
{
		if (c >= 'a' && c <= 'z')
			return (1);
		if (c >= 'A' && c <= 'Z')
			return (1);
		else
			return (0);
}
