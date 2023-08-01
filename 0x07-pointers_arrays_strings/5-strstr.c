#include "main.h"

/**
 * _strpbrk - Entery point.
 *
 * @s: string parameter.
 * @accept: string parameter.
 *
 * Description: searches a string for any of a set of bytes.
 *
 * Return: Pointer.
 */
char *_strstr(char *haystack, char *needle)
{
    /** 
     * haystack = "hello, wrold"
     * needle = "worlde"
     */
    int i, j;
    
    for (i = 0; needle[i] != '\0'; i++)
    {
        for (j = 0; haystack[j] != '\0'; j++)
        {
            if (needle[i] == haystack[j])
            {
                return (needle + i);
            }
        }
    }
    return ('\0');
}
