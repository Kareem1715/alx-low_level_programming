#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - function pointer
 *
 * @s: The sign in string passed to functoin.
 *
 * Description: This function selects the correct function
 * to perform the operation asked by the user.
 *
 * Return: pointer to the function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5) /* last return null if no operator passed the loop */
	{/* IF the operators equal to the sign passed */
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f); /* Return the functoin of operatro */
		i++;
	}

	return (0); /* if given non of the above operators */

}
