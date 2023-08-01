#include "main.h"

/**
 * _strstr - Entery point.
 *
 * @haystack: string parameter.
 * @needle: string parameter.
 *
 * Description: locates a substring.
 *
 * Return: Pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	/**
	 * haystack = "hello, world code"
	 * needle = "worldsf"
	 */
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
			if (haystack[i + j] != needle[j])
			
		if (!needle[j])
			return (&haystack[i]);
	}
	return ('\0');
}
