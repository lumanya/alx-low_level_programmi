#include "main.h"
/**
 * rev_string -function that reverse string
 * @s: string that is reversed
 */

void rev_string(char *s)
{
	char tmp[700];
	int i, len;

	for (len = 0; *s != '\0'; ++len)
	{
		tmp[len] = *s;
		s++;
	}
	s--;
	i = 0;

	for (i = 0; i <= len; i++)
	{
		*(s - i) = tmp[i];

	}
}
