#include "main.h"
/**
 * print_to_98 - function that print whole number from n to 98
 * @n: staring integer for function to work on
 */

void print_to_98(int n)
{
	int i;
	int negative;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar('0' + i);
			_putchar(44);
			_putchar(32);
		}

	}

	if (n < 98 && n >= 0)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar('0' + i);
		}

	}

	if (n < 0)
	{

		for (i = n; i <= 98; i++)
		{
			if (i < 0)
			{
				negative = i * -1;
				_putchar(45);
				_putchar('0' + negative);
			} else
				_putchar('0' + i);
		}
	}

	_putchar(10);
}
