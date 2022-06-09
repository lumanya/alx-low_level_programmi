#include "main.h"
/**
 * _isupper - function that check for uppercase character
 * @c: character that checked
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return 1;
	else
		return 0;

}
