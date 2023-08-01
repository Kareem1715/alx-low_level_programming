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
     * haystack = "hello, world"
     * needle = "worldsf"
     */
    int i, j;
    
    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0; needle[j] != '\0'; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
 
        }
    }
    return ('\0');
}
