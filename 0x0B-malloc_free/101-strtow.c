#include "main.h"
#include <stdlib.h>

char *move_words(char *s, int be, int en);

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
	int i, c = 0, count = 0, len = 0,
	begin = 0, end = 0, mo = 0, fr = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	while (str[c] != '\0')
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] != '\0'))
			count++; /* length of charachers in words (only words not spaces) */
		c++;
	}
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count));
	if (words == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++; /* length of all string with spaces */
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			end = i + 1;
			words[mo] = move_words(str, begin, end);
			if (words[mo] == NULL)
			{
				for (fr = 0; fr < count; fr++)
					free(words[fr]);
				free(words);
				return (NULL);
			}
			mo++;
		}
		else if (str[i] != ' ' && str[i + 1] != ' ')
			continue;
		else
			begin = i + 1;
	}
	return (words);
}

/**
 * move_words - second function.
 *
 * @s: string passed by calling the function.
 * @be: begin of the word.
 * @en: end of the word.
 *
 * Description: This function move the string.
 *
 * Return: pointer of string.
 */
char *move_words(char *s, int be, int en)
{
	char *word;
	int i;

	word = malloc(sizeof(char) * (en - be + 1));
	if (!word)
		return (NULL);

	for (i = 0; i < en - be; i++)
		word[i] = s[be + i];
	word[i] = '\0';

	return (word);
}
