#include "main.h"

/**
 * puts2 - function that print every character
 * @str: pointer of type string , that is printed
 */

void puts2(char *str)
{

	int len;

	for (len = 0; *str != '\0'; ++len)
	{
		if (len % 2 == 0)
			_putchar(*str);
		++str;
	}

	_putchar('\n');
}
