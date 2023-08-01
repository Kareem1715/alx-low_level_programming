#include "main.h"

/**
 * _strspn - Entery point.
 *
 * @s: string parameter.
 * @accept: string parameter.
 *
 * Description: gets the length of a prefix substring.
 *
 * Return: unsigned integar.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, result = 0;



	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				result++;
				break;
			}
		}
	}

	return (result + 1);
}
