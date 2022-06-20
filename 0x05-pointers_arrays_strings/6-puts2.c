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
		_putchar(*str);
		str = str + 2;
	}

	_putchar('\n');
}
