#include <stdio.h>

/**
 * print_array - function that print elemants of an array.
 * @a: pointer int type
 * @n: j is avaribale
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = *(a + i);
		printf("%d", j);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
