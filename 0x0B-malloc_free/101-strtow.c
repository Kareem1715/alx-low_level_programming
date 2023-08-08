#include "main.h"
#include <stdlib.h>

/**
 * strtow - Entery point
 *
 * @str: string passed by calling the function.
 *
 * Description: This function splits a string into words.
 *
 * Return: pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    char **words;
    int i, j, c = 0, count = 0;

    if (str == NULL || str == "")
        return (NULL);

	while (str[c] != '\0')
    {
        if (str[c] != " ")
            count++;

        c++;
    }
    words = malloc(sizeof(char *) * (count + 1));
    if (words == NULL)
        return (NULL);
    str[count] = '\0';

    for (i = 0; i < count + 1; i++)
    {
        for (j = 0; words[i][j] != '\0'; j++)
        words[i] = malloc(sizeof(char) * count + 1);

    }

    return (words);

}
