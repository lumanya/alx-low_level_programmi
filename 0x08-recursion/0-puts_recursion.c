#include "main.h"

/**
 * _puts_recursion - function that print string to stdout follwed by new line
 * @s: pointer of char type, pointing to string printed
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s != '\0')
		_puts_recursion(s);
	_putchar('\n');

}
