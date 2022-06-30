#include <stdlib.h>

/**
 * _strdup - return pointer to new allocated space in memory containg a copy\
 * of string given as parameter
 * @str: string
 *
 * Return: Pointer to srting(success), NULL for failure
 */

char *_strdup(char *str)
{
	char *dest;
	int index, len;

	if (*str == 0)
		return (0);
	len = 0;
	while (*(str + len))
		len++;

	dest = (char *)malloc(sizeof(char) * (len + 1));

	if (dest == 0)
		return (0);

	for (index = 0; index <= len; index++)
	{
		*(dest + index) = *(str + index);
	}
	return (dest);
}
