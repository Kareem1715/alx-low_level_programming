#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entery point
 *
 * @s1: first string.
 * @s2: second string.
 * @n: number of char from the second string.
 *
 * Description: This function concatenate two strings.
 *
 * Return: The string with new size.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int size1 = 0, size2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	concat = malloc(sizeof(char) * (size1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i++] = s2[j];

	concat[i] = '\0';
	return (concat);

}
