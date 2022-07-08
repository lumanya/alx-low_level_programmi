#include "function_pointers.h"

/**
 * int_index -seraches for integer in array
 * @size: size of array
 * @array: array
 * @cmp: function pointer
 *
 * Return: index of first element , -1 for no element matches and -1 when \
 * size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}
