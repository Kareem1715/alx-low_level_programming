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
	int sum = 0;
	char *flag;

	while (-- argc)
	{
		for (flag = argv[argc]; *flag; flag++)
			if (*flag < '0' && *flag > '9')
				{
					printf("Error\n");
					return (1);
				}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
