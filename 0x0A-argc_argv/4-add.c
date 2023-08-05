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
	char *pnt;

	for (i = 1; i < argc; i++)
	{
		pnt = argv[i];

		while (*pnt != '\0')
		{
			if (*pnt < '0' || *pnt > '9')
			{
				printf("Error\n");
				return (1);
			}
			pnt++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
