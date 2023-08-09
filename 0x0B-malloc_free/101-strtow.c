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
	int c = 0, count = 0, len = 0, i,
	begin = 0, end = 0, mo = 0, fr = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	while (str[c] != '\0')
	{/* count length of words (Alx School #cisfun) --> 3 words */
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			count++; /* 3 words in this example */
		c++;
	}
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)/* IF the function fails to allocation */
		return (NULL);

	while (str[len] != '\0')
		len++; /* length of whole string with spaces */
	for (i = 0; i < len; i++)
	{	/* Check each word in string */
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			end = i + 1; /* i is the last char in word & add +1 for '\0' */
			words[mo] = move_words(str, begin, end); /* begin = first indix of word */
			if (words[mo] == NULL)		/* begin depend on else condition */
			{
				for (fr = 0; fr < count; fr++)
					free(words[fr]); /* Free each cahr in word */
				free(words); /* Free the whole word */
				return (NULL);
			}
			mo++; /* Move the new word */
		}
		else if (str[i] != ' ' && str[i + 1] != ' ')
			continue; /* For two char in the same word */
		else
			begin = i + 1; /* increase begin while the if condition is false */
	}
	return (words);
	/* words in this teset case =   "Alx\0"   "School\0"   "#cisfun\0"    */
}	/* And he make new line in main file of program */

/**
 * move_words - second function.
 *
 * @s: string passed by calling the function.
 * @be: begin of the word.
 * @en: end of the word.
 *
 * Description: This function move the words.
 *
 * Return: pointer of string.
 */
char *move_words(char *s, int be, int en)
{
	char *word;
	int i;

	/* (en - be + 1) --> (end of word - begin of word) + null terminatoin */
	word = malloc(sizeof(char) * (en - be + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < en - be; i++) /* (end - begin) --> size of word */
		word[i] = s[be + i]; /* Move from the begin of word */
	word[i] = '\0'; /* Add null terminatoin at the end of word */

	return (word);
}
