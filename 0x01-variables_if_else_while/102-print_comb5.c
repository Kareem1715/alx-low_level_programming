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
	int i, j, k, l;
	l = 0;
	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '8'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = l; l <= '9'; l++)
				{
					if (i == k && j == l)
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == '9' && j == '8' && k == '9' && l == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
			l += 1;
		}
	}
	putchar('\n');

	return (0);
}
