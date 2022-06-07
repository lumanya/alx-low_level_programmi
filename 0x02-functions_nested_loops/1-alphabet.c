#include "main.h"


/**
 * print_alphabets - functions that uses _putchar function to print lowwercase \
alhabets
 * Description:  _putchar- function that print character on stdout with char inp\
ut character
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
