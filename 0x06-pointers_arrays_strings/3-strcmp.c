#include "main.h"

/**
 * _strcmp - Entery point.
 *
 * @s1: char pointer parameter.
 * @s2: char pointer parameter.
 *
 * Description: compare two string.
 *
 * Return: poniter of string.
 */
int _strcmp(char *s1, char *s2)
{
	int i, lens1, strcm;

	lens1 = 0;
	while (s1[lens1] != '\0')
		lens1++;

	for (i = 0; i <= lens1; i++)
	{
		if (s1[i] != s2[i])
			strcm = s1[0] - s2[0];
		else
			strcm = 0;
	}
	return (strcm);
}
