#include "main.h"

/**
 * _strlen - return length of string
 * @s: pointer to char type
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0, i;

	for (i = 0; *s != '\0'; ++i)
	{
		++len;
		++s;
	}

	return (len);
}
