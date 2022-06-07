#include "main.h"


/**
 * print_alphabet - function that print alphabets ending with new line
 * Description: print alphabets using _putcahr functions
 */

void print_alphabet(void)
{

	int ch;

	for (ch = 97; ch <= 122; ch++)
	{

		_putchar(ch);
	}

	_putchar(10);

}
