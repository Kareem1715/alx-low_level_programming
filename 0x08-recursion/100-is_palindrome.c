#include "main.h"

/**
 * is_palindrome - prime number by recursion.
 *
 * @s: string parameter you need to check it is palindrom or not.
 *
 * Description: This function calling the function palin and lengthOfString.
 *
 * Return: returns palin function.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (palin(s, lengthOfString(s), 0));
}

/**
 * lengthOfString - length by recursion.
 *
 * @s: string parameter you need to check it is palindrom or not.
 *
 * Description: This function calling the function palin and lengthOfString.
 *
 * Return: returns length of string.
 */
int lengthOfString(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + lengthOfString(s + 1));
}

/**
 * palin - Prime number by recursion.
 *
 * @str: string parameter you need to check it is palindrome or not.
 * @len: integar parameter length of string.
 * @j: integar parameter iterator.
 *
 * Description: This function check palindrome
 *
 * Return: returns palin function.
 */
int palin(char *str, int len, int j)
{

		if (*(str + j) != *(str + len - 1))
			return (0);
		if (j >= len)
			return (1);

		return (palin(str, len - 1, j + 1));

}
