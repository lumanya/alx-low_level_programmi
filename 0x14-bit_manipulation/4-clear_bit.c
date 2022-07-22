#include "main.h"
/**
 * clear_bit - set the value of bit to 0 at given index
 * @n: pointer to integer
 * @index: poistion of bit in integer to be set 0
 *
 * Return: 1 for success , -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);
	mask = ~(mask << index);
	*n = (mask & *n);
	return (1);
}
