#include "main.h"

/**
 * string_toupper - Entery point.
 *
 * @s: string parameter.
 *
 * Description: uppercase string.
 *
 * Return: string pointer.
 */
char *string_toupper(char *s)
{
	int lenstr, i;

	lenstr = 0;
	while (s[lenstr] != '\0')
	lenstr++;

	for (i = 0; i < lenstr; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
