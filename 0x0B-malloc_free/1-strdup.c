#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entery point
 *
 * @str: string that we want to copy it.
 *
 * Description: copy of string allocated in space memory.
 *
 * Return: The copied string with new size.
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++; /* len is the size of string */

	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] < len; i++)
		s[i] = str[i];

	return (s);
}
