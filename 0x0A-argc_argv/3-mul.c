#include "main.h"

/**
 * main - Entry point
 *
 * @argc: number of arguments passed to program.
 * @argv: is a vector is a one dimentional array of strings.
 *
 * Description: prnit the name of program.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0, result = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
			result *= string_to_int(argv[i]);

		printf("%d\n", result);
	}
	else
		printf("Error\n");

	return (0);
}

/**
 * string_to_int - Entry point
 *
 * @str: string that you want to convert to integar.
 *
 * Description: convert the string to integar
 *
 * Return: the integar number.
 */
int string_to_int(char *str)
{
	int i = 0, number = 0;

	for (i = 0; str[i] != '\0'; i++)
		number = number * 10 + str[i] - '0';

	return (number);
}
