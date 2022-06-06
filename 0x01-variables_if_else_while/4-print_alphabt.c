#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * for block printing alphabets with exceptionof p and p
 *
 * Return: Always 0(success)
 */



int main(void)
{

	char ch;

	for ( ch = 'a'; ch <= 'z'; ch++)
	{

		if ( ch != 'p' || ch != 'q')
			putchar(ch);
	}

	putchar('\n');

	return (0);

}
