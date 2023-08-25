#include <stdio.h>

void Before_excute_main(void) __attribute__((constructor));

/**
 * Before_excute_main - print statement before the main function is executed.
 *
 */
void Before_excute_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
