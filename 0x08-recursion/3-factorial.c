#include "main.h"
/**
 * factorial - return factorial of number n
 * @n: number to factorise
 *
 * Return: -1 if number is less than 0 otherwise factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
			return (1);
		return (n * factorial(n - 1));
	}
}
