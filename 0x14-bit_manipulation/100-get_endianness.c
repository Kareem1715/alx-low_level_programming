#include "main.h"

/**
 * get_endianness - Check the endianees
 *
 * Return: This function return 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int number = 1;

	return (*(char *)&number);
	/* Cast the address of number and get the value of it */
	/* and return 0 or 1 depend on the value */
}
