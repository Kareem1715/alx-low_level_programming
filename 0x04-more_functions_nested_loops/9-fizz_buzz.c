#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: Fizz Buzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
			continue;
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
