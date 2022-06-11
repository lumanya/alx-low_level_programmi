#include "main.h"
#include <stdio.h>

void primefactors(void);
/**
 * main -Entry point of the program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	primefactors();

	return (0);

}

/**
 * primefactors - function to print prime factors of a number
 */

void primefactors(void)
{
	long int n = 612852475143;
	long int div = 2, maxFact;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", maxFact);
				break;
			}
		}
	}
}
