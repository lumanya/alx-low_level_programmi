#include "main.h"

/**
 * puts_half - function that print half of string
 * @str: pointer of string
 */

void puts_half(char *str)
{

	int len;
	int n, i;

	for (len = 0; *str != '\0'; ++len)
		++str;
	--str;

	n = len / 2 - 1;
	for (i = 1; i <= len / 2; ++i)
	{
		_putchar(*(str - n));
		--n;
	}
	_putchar('\n');
}
