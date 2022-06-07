#include "main.h"

/**
 * main -Entry point of the program
 *
 * Descriptions: mprogram use function defined in header file to print _putchar
 *
 * Return: Always 0(sucess)
 */


int main(void)
{

	int ch;

	for (ch = 95; ch <= 117; ch++)
	{
		if (ch == 95 || ch == 112 || ch == 117)
			_putchar(ch);
	}

	for (ch = 116;  ch >= 99; ch--)
	{

		if (ch == 116 || ch == 99)
			_putchar(ch);
	}

	for (ch = 104; ch >= 97; ch--)
	{

		if (ch == 104 || ch == 97)
			_putchar(ch);
	}


	for (ch = 114; ch >= 10; ch--)
	{

		if (ch == 114 || ch == 10)
			_putchar(ch);
	}
	return (0);



}
