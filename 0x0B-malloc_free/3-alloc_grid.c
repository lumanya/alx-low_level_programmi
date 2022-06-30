#include <stdlib.h>

/**
 * alloc_grid - return 2 dimesnional array
 * @width: array width
 * @height: array heigth
 *
 * Return: array for success, 0 for failure
 */

int **alloc_grid(int width, int height)
{

	int **s;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);

	s = malloc(height * sizeof(int *));
	if (s == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		*(s + i) = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
			s[i][j] = 0;

	}

	return (s);
}
