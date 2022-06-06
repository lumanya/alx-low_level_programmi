#include <stdio.h>

/**
 * main - Entry point of the program
 * two for block printing tow digi
 *
 * Return: Always 0(sucess)
 */

int main(void)
{

	int first_digit;

	for (first_digit = 48; first_digit <= 57; first_digit++)
	{

		putchar(first_digit);

		if (first_digit != 57)
		{

			putchar(44);
			putchar(32);

		}

	}

	putchar(10);

	return (0);
}
