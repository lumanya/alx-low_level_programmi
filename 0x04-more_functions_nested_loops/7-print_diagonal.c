#include "main.h"

/**
 * print_diagonal - function that print diagonal line
 * @n: argument which hold integer for numbervof time _ printed
 */

void print_diagonal(int n)
{

	int counter;
	int row_number;
	int tmp = 0;

	if (n <= 0)
	{
	}
	else
	{
		for (counter = 1; counter <= n; counter++)
		{
			if (counter != n)
			{
				_putchar(92);
				_putchar('\n');
				row_number = tmp;
				while (row_number < counter)
				{
					_putchar(32);
					++row_number;
				}
			}
			if (counter == n)
			{
				_putchar(92);
			}
		}
	}
	_putchar('\n');
}
