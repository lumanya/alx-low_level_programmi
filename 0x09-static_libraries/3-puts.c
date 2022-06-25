#include "main.h"
/**
 * _puts - print string to standard output
 * @str: ponter of char type
 */

void _puts(char *str)
{

	int len;

	for (len = 0; *str != '\0'; ++len)
	{
		_putchar(*str);
		++str;
	}
	_putchar('\n');

}
