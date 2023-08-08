#include "main.h"
#include <stdlib.h>

int size_of_string(char *s);

/**
 * argstostr - Entery point
 *
 * @ac: number of arguments.
 * @av: the seconde argument (string).
 *
 * Description: concatenates all the arguments of your program.
 *
 * Return: the new string.
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i, j, length = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++) /* add +1 for '\n' */
		length += size_of_string(av[i]) + 1;

	result = malloc(sizeof(char) * length + 1);
	/* add +1 for null termination '\0' at the end of string */
	if (result == NULL)
		return (NULL);/* if there is no space for malloc */

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j]; /* Add the characters to result */
			k++;
		}
		result[k] = '\n'; /* Add the new line and the end of each string */
		k++;
	}

	return (result);

}

/**
 * size_of_string - new function
 *
 * @s: string parameter.
 *
 * Description: count the length of string.
 *
 * Return: the length.
 */
int size_of_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
