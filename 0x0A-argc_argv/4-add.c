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
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if ((*(argv[i]) >= '0' && *(argv[i]) <= '9') || *(argv[i]) == '-')
			sum += atoi(argv[i]);

		else
		{
			printf("Error\n");
			return (0);
		}

	}
	printf("%d\n", sum);

	return (0);
}
