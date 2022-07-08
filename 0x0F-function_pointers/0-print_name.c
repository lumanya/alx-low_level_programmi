#include "function_pointers.h"
/**
 * print_name - print name
 * @name: pointening to printed name
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		f(name);
}
