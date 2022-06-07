#include "main.h"

/**
 * print_sign - function that print sign of number
 * @n: number checked by function
 *
 * Return: 1 if is postive, 0 if is zero and -1 if is negative
 */


int print_sign(int n)
{


	if (n >= 49 && n <= 57)
	{
		_putchar(43);

		return (1);
	}

	else if (n == 48)
	{
		_putchar(48);
		return (0);
	}

	else
	{
		_putchar(45);
		return (-1);
	}
}
