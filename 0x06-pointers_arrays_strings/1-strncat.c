#include "main.h"

/**
 * _strcat - Entery point
 *
 * @dest: char pointer parameter.
 * @src: char pointer parameter.
 *
 * Description: concatenates two strings
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len, i;

    dest_len = 0;
    while (dest[dest_len] != '\0')
        dest_len++;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];

    return (dest);
}
