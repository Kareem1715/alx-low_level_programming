#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Description: prime factors 
 */
int main(void)
{
    unsigned long int i, num = 612852475143;

    while(num % 2 == 0)
    {
        num = num / 2;
        printf("%d ", 2);
    }

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        printf("%lu ", i);
    }

    printf("\n");
	return (0);
}
