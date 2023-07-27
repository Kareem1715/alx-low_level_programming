#include "main.h"

/**
 * leet - Entery point.
 *
 * @s: string parameter.
 *
 * Description: convert letters to numbers.
 *
 * Return: string pointer.
 */
char *leet(char *s)
{
	int i, j;
	char num[] = {'4', '3', '0', '7', '1'};
	char sml[] = {'a', 'e', 'o', 't', 'l'};
	char cap[] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
			if (s[i] == sml[j] || s[i] == cap[j])
				s[i] = num[j]; /* Convert letter to number*/
	}

	return (s);
}
