#include "main.h"

/**
 * print_line - function that print staright line
 * @n: argument which hold integer for numbervof time _ printed
 */

void print_line(int n)
{

	int counter;

	for (counter = 1; counter <= n; counter++)
	{
		if (counter <= 0)
		{

		} else
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
