#include "main.h"

/**
 * cap_string - Entery point.
 *
 * @s: string parameter.
 *
 * Description: Capitalize each word of string.
 *
 * Return: string pointer.
 */
char *cap_string(char *s)
{
	int i, j;
	char seperators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
	'(', ')', '{', '}'}; /* Number of seperators = 13 */

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z') /* Check the first letter */
			s[0] -= 32;

		for (j = 0; j < 13; j++) /* Check the seperators in sting s */
			if ((s[i] == seperators[j]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
				s[i + 1] -= 32; /* Convert the next letter to upper case */
	}
	return (s);
}
