#include "main.h"


/**
 * print_alphabets - function that print alphabets ending with new line
 *
 * Description: function print alphabets in ascending order ending newline
 *
 * Return: void
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
