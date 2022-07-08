#include "function_pointers.h"

/**
 * print_name - print name
 * @name: pointening to printed name
 * @f: function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
