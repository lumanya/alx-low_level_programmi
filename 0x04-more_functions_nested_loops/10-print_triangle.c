#include "main.h"

/**
 * print_triangle -function that print triangle using #
 * @size: size of triangle
 */

void print_triangle(int size)
{

	int col_number;
	int space;
	int hash;

	if (size <= 0)
	{
	}
	else
	{
		for (col_number = 1; col_number <= size; ++col_number)
		{
			space = 1;
			while (space <= (size - col_number))
			{
				_putchar(32);
				++space;
			}
			hash = 1;
			while (hash <= col_number)
			{
				_putchar(35);
				++hash;
			}
			_putchar('\n');
		}
	}
}
