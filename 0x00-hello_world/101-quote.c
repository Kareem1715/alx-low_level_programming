#include <stdio.h>
#include <string.h>

int write(int filedes, const char *buf, unsigned int nbyte);

/**
 * main - Entry point
 *
 * Return: 1 (Not Success)
 *
 * Description: strlen used for count the number of cahr in statement
 * to use it in write.
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}
