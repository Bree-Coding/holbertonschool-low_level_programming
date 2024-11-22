#include "fuction_pointors.h"

/**
 * print_name - Function that prints a name
 * @name: a name
 * @f: a pointer to a fonction
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
