#include "main.h"

/**
 * _strlen_recursion - recursion function that calcutale length of string
 * @s: pointer of char type pointing to string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}
