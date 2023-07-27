#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Entery point.
 *
 * @b: string parameter.
 * @size: integar parameter.
 *
 * Description: print buffer.
 *
 * Return: string poniter (r).
 */
void print_buffer(char *b, int size)
{
	int byte, last;

	if (size > 0)
	{
		for (byte = 0; byte < size; byte += 10)
		{
			if (size - byte < 10)
				last = size - byte;
			else
				last = 10;
			printf("%08x: ", byte);
			print_hexa(b, byte, last);
			print_char(b, byte, last);
			printf("\n");
		}
	}
	else
		printf("\n");
}

/**
 * print_hexa - New function.
 *
 * @b: string parameter.
 * @byte: integar parameter.
 * @last: integar parameter.
 *
 * Description: print hexadecimal.
 *
 * Return: Nothing (void function)
 */
void print_hexa(char *b, int byte, int last)
{
	int i = 0;

	while (i < 10)
	{
		if (i < last)
			printf("%02x", *(b + byte + i));
		else
			printf("  ");
		if (i % 2 != 0)
			printf(" ");
		i++;
	}
}

/**
 * print_char - New function.
 *
 * @b: string parameter.
 * @byte: integar parameter.
 * @last: integar parameter.
 *
 * Description: print characters.
 *
 * Return: Nothing (void function)
 */
void print_char(char *b, int byte, int last)
{
	int chars, i = 0;

	while (i < last)
	{
		chars = *(b + byte + i);
		if (!(chars >= 32 && chars <= 126))
			chars = '.';
		printf("%c", chars);
		i++;
	}
}
