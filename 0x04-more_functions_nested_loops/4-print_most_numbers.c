#include "main.h"

/**
 * print_most_numbers - function that print numbers form 0 to 9 except 2 & 4
 */

void print_most_numbers(void)
{

	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		if (ch == 50 || ch == 52)
		{
		}
		else
			_putchar(ch);
	}
	_putchar(10);
}
