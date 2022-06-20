#include <stdio.h>

/**
 * print_array -function that print array element
 * @a: array
 * @n: size of array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d, \n", a[i]);
	}
}
