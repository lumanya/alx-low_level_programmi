#include <stdio.h>

/**
 * main - Entry point of the program
 * for -block printing alphabets in revervese order'
 *
 * Return: Always 0(sucess)
 */

int main(void)
{

	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{

		putchar(ch);

	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{

		putchar(ch);
	}

	putchar('\n');

	return (0);
}
