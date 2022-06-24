#include "main.h"

/**
 * _isalpha - function that check for alphabetic letters
 * @c: character checked by function
 *
 * Return: 1 if c is letter , lowercase or uppercase. 0 false
 */


int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}
