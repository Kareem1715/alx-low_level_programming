#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Description: compination of two digit of numbers
 */
int main(void)
{
	int i, j;

	for (i = '0'; i < '9'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (j == i)
				continue;
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
