#include "main.h"

/**
 * more_numbers - function that print numbers form 1 to 14 ten times
 */

void more_numbers(void)
{
	int ch;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch > 9)
			{
				/* first digit */
				_putchar('0' + (ch / 10));
				/* second digit */
				_putchar('0' + (ch % 10));
			} else
			{
				_putchar('0' + ch);
			}
		}
		_putchar(10);
	}
}
