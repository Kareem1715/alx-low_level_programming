#include "main.h"

/**
 * _strpbrk - Entery point.
 *
 * @s: string parameter.
 * @accept: string parameter.
 *
 * Description: searches a string for any of a set of bytes.
 *
 * Return: Pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
								  /*   ! -->       */
	for (i = 0; s[i] != '\0'; i++)/* hello, world */
		for (j = 0; accept[j] != '\0'; j++)/* world */
			if (s[i] == accept[j])
				return (s + i); /* Make s point to s + i = l to end of string */

	return ('\0');
}
