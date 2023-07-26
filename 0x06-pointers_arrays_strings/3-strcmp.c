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
	int i, strcm;

	strcm = 0;
	for (i = 0;(s1[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])
		{
			strcm = s1[0] - s2[0];
			break;
		}
	}
	return (strcm);
}
