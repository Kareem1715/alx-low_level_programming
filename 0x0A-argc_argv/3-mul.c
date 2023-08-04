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
	int i, result = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
			result *= atoi(argv[i]);

	    printf("%d\n", result);
	}
	else
		printf("Error\n");

	return (0);
}
