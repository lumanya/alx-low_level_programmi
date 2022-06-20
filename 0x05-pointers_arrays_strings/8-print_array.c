#include <stdio.h>

/**
 * print_array -function that print array element
 * @a: array
 * @n: size of array
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; ++i)
		{
			if (i < n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}

}
