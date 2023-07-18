#include <stdio.h>
#include "main.h"

/**
 * main - Entery point
 *
 * Return: Always 0 (success)
 *
 * Description: putchar the string
 *
 */

int main(void)
{
	int i;
	char text[] = "_putchar\n";

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}


	return (0);
}
