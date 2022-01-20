#include "function_pointers.h"

/**
 * print_name - print a name from a function
 *
 * @name: name to pass to function
 *
 * @f: function as arguement
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
