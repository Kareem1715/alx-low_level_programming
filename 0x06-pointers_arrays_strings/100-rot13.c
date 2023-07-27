#include "main.h"

/**
 * rot13 - Entery point.
 *
 * @s: string parameter.
 *
 * Description: rot13.
 *
 * Return: string pointer.
 */
char *rot13(char *s)
{
	char *abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *nop = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
			if (s[i] == abc[j])
			{
				s[i] = nop[j];
				break;
			}
	}

	return (s);
}
