#include "main.h"

/**
 * print_square - function that print square
 * @size: argument that specify size of function
 */

void print_square(int size)
{
	int col_number;
	int row_number;

	if (size <= 0)
	{
	}
	else
	{
		for (col_number = 1; col_number <= size; ++col_number)
		{
			for (row_number = 1; row_number <= size; ++row_number)
			{
				_putchar(35);
			}
			if (col_number != size)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
