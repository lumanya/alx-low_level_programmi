#include "main.h"

/**
 * _strcpy -function that copy string pointer src to buffer pointed by dest
 * @dest: pointer of char pointed to buffer
 * @src: pointer of char type that is copied
 *
 * Return: copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != '\0'; ++i)
	{
		dest[i] = *src;
		++src;
	}
	dest[i] = '\0';
	return (dest);
}
