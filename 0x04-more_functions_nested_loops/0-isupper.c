#include "main.h"

/**
 * _isupper - check is upper
 *
 *@c: parameter recieved by calling function
 *
 * Description: check the letter is upper or not.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
