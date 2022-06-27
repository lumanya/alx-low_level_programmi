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
	unsigned int index;
	char *array;

	if (size == 0)
	{
		return ("NULL");
	}
	else
	{
		array = (char *)malloc(sizeof(char) * size);

		for (index = 0; index < size; index++)
		{
			array[index] = c;

			if (array[index] != c)
				return ("NULL");
		}
	}

	return (array);
}
