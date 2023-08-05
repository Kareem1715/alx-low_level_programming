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
	int i, val = 0, count = 0, number;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	for (i = 1; i < argc; i++)
	{
		while (val < 5)
			if (number >= (number - cents[val]) && (number - cents[val]) >= 0)
			{
				number -= cents[val];
				count++;
			}

			else
				val++;

	}
	printf("%d\n", count);
	return (0);
}
