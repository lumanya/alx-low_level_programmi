/**
 * swap_int -function that swap values of two integers
 * @a: pointer pointing value of variable a
 * @b: pointer pointing value of varible b
 */

void swap_int(int *a, int *b)
{

	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
