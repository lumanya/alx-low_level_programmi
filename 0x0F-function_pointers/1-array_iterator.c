#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - print element of array
 * @array: array
 * @size: size of array
 * @action: function pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != 0)
	{
		if (size > 0 && array != 0)
		{
			for (i = 0; i < size; i++)
				action(array[i]);
		}
	}
}
