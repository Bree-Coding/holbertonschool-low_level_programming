#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: a name
 * @f: a pointer to a fonction
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
