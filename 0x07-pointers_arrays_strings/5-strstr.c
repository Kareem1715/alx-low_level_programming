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
	 * haystack = "hello, world"
	 * needle = "worldsf"
	 */
	int i, j;

	for (i = 0; needle[i] != 0; i++)/*world*/
	{
		for (j = 0; haystack[j] != 0; j++)/*hello, world*/
		{
			if (needle[i] == haystack[j])
			{
				return (haystack + j);
			}
		}
	}
	return ('\0');
}
