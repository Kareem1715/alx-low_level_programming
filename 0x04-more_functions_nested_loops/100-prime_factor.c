#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Description: prime factors
 */
int main(void)
{
	long int i, largest, num = 612852475143;

	while (num % 2 == 0)
		num = num / 2;

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			num = num / i;
			largest = num;
		}

	}

	printf("%ld\n", largest);
	return (0);
}
