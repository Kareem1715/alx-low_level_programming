#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Entery point
 *
 * @s1: first string.
 * @s2: the second string that will be added to frist string.
 *
 * Description: concatenate two string with malloc.
 *
 * Return: the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i, s1ize = 0, s2ize = 0, Total = 0;
	char *concat;

	while (s1[s1ize] != '\0')
		s1ize++;
	while (s2[s2ize] != '\0')
		s2ize++;

	Total = s1ize + s2ize + 1;
	concat = malloc(sizeof(char) * Total);
	if (concat == 0)
		return (NULL);

	for (i = 0; i < s1ize; i++)
		concat[i] = s1[i];

	for (i = s1ize; i < Total; i++)
		concat[i] = s2[i - s1ize];

	return (concat);

}
