#include "main.h"
/**
 * flip_bits - return number of bits you nedd to flip flop to get from one
 * number to another number
 * @n: number to flip its bits to get another number
 * @m: number fliped
 *
 * Return: number of bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int cmp;
	unsigned int n_bits = 0;

	cmp = n ^ m;
	while (cmp > 0)
	{

		if ((cmp & 1) == 1)
			n_bits++;
		cmp >>= 1;
	}
	return (n_bits);

}
