#include "main.h"

/**
 * print_alphabet_x10 - function that print alphabets in ascending order 10
 * time
 */

void print_alphabet_x10(void)
{

	int ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 97; ch <= 122; ch++)
			_putchar(ch);

		_putchar(10);
	}



}
