#include "main.h"

/**
 * print_rev - print string in reverse order
 * @s: pointer of char type
 */

void print_rev(char *s)
{
	int len;

	/* loop counting length of string */
	for (len = 0; *s != '\0'; ++len)
		++s;
	--s;
	for (len  = len; len != 0; --len)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}
