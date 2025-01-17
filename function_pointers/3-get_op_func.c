#include "3-calc.h"

/**
 * get_op_func - function pointer that selects the correct function
 * to perform the operation asked by the user
 * @s: a string
 * Return: ops[i].f, NULL
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
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
