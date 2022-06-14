#include <main.h>

/**
 * print_rev - function that print string in reverse.
 * @s: pointer int type
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
		s++;
	s--;

	for (len = len; len != 0; len--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
