#include "3-calc.h"

/**
 * main - Entry point.
 *
 * @argc: The number of arguments.
 * @argv: The values of arguments.
 *
 * Description: This function prints the opcodes of its own main function.
 *
 * Return: zero (always success)
 */
int main(int argc, char *argv[])
{
	int numByte, i;
	char *ptrmain = (char *)main; /* ptrmain point to main after cast */

	if (argc != 2) /* if number of passed argument not correct */
	{
		printf("Error\n");
		exit(1);
	}

	numByte = atoi(argv[1]); /* convert the passed number to integar */
	if (numByte < 0) /* if number of bytes negative */
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < numByte; i++)
	{/* %02hhx -> 02 for two char long, hh for lowercase and x for hexadecimal*/
		printf("%02hhx", *ptrmain);
		ptrmain++; /* check the next number */

		if (i != numByte - 1)
			printf(" "); /* Do space while the number is not the last number */
	}
	printf("\n");
	return (0);
}
