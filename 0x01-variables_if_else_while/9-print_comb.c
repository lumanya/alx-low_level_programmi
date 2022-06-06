#include <stdio.h>

/**
 * main - Entry point of the program
 * two for block printing tow digit 
 *
 * Return: Always 0(sucess)
 */

int main(void)
{

	int first_digit;
	int second_digit;

	for (first_digit = 48; first_digit <= 57; first_digit++)
	{

		for ( second_digit = 48; second_digit <= 57; second_digit++)
		{

			putchar(first_digit);
			putchar(second_digit);
			putchar(44);
			putchar(32);

		}


	}

	return (0);
}
