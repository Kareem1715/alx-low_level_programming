#include "3-calc.h"

/**
 * main - Entry point fuction
 *
 * @argc: number of arguments.
 * @argv: values of passed arguments.
 *
 * Description: This function performs simple operations.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*func_ptr)(int, int), res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func_ptr = get_op_func(argv[2]);
	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	res = func_ptr(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
