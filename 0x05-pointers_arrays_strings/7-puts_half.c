#include "main.h"

/**
 * puts_half - function that half of the string.
 * @str: pointer int type
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; *str != '\0'; i++)
		str++;

	j  = i / 2;

	for (j = j; j != 0; j--)
		_putchar(*(str - j));

	_putchar('\n');
}
