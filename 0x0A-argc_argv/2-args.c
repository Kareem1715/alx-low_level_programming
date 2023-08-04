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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
