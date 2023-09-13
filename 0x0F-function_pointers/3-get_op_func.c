#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Gets the relevant function depending on operator
 * @s: string operator
 *
 * Return: pointer to relevant function
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t operations[5] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};

	i = 0;

	while (i < 5)
	{
		if ((*s == *operations[i].op) && !*(s + 1))
			return (operations[i].f);
		i++;
	}

	return (NULL);
}
