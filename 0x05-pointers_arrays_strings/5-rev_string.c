#include "main.h"

/**
 * rev_string - Entery point
 *
 * @s: char pointer parameter.
 *
 * Description: print a string.
 *
 * Return: nothing it is a void function.
 */
void rev_string(char *s)
{
	int length, i, tmp;

	length = 0;
	while (s[length] != '\0')
		length++;

	/* we need the half length of string to swap */
	for (i = 0; i < length / 2; i++)
	{   /* swap the first element with last element */
		tmp = s[i]; /* store the first element in tmp */
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
}
