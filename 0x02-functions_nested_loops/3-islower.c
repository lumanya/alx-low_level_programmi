#include "main.h"

/**
 * _islower -function that checks for lower case character
 * @c: the character to be checked
 *
 * Return: 1 when true
 * Return: 0 when false
 */

int _islower(int c)
{

	if (c >= 97 && c <=122)
		return (1);
	else
		return (0);

}
