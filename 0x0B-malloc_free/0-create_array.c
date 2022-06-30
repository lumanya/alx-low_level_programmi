#include <stdlib.h>

/**
 * create_array - function that create and initiliaze array aarray
 * @size: size of array
 * @c: character for initialization
 *
 * Return: array for success and NULL for failure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size <= 0)
		return (0);

	s = malloc(sizeof(char) * size);

	if (s == 0)
		return (0);

	for (i = 0; i < size; i++)
		*(s + i) = c;

	*(s + i) = '\0';

	return (s);
}
