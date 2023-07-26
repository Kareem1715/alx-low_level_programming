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
	int i, lens1, lens2, strcm, tmp;

	lens1 = 0;
	while (s1[lens1] != '\0')
		lens1++;

	lens2 = 0;
	while (s2[lens2] != '\0')
		lens2++;

	if (lens2 > lens1)
	{
		tmp = lens2;
		lens2 = lens1;
		lens1 = tmp;
	}

	for (i = 0; i < lens1; i++)
	{
		if (s1[i] != s2[i])
			strcm = s1[0] - s2[0];
		else
			strcm = 0;
	}
	return (strcm);
}
