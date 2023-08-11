#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entery point
 *
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Description: This function multiplie two number
 *
 * Return: Always(0) success.
 */
int main(int argc, char *argv[])
{
	char *pnter;
	int num1, num2, mul, j, i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}


	for (i = 1; i < argc; i++)
	{
		pnter = argv[i];
		for (j = 0; pnter[j] != '\0'; j++)
		{
			if (pnter[j] < '0' || pnter[j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	if (atoi(argv[1]))
		num1 = atoi(argv[1]);
	else
	{
		printf("Error\n");
		exit(98);		
	}

	if (atoi(argv[2]))
		num2 = atoi(argv[1]);
	else
	{
		printf("Error\n");
		exit(98);		
	}
	mul  = num1 * num2;

	printf("%d\n", mul);
	return (0);

}
