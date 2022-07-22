#include "main.h"
/**
 * set_bit - set the value of bit at given index
 * @n: pointer to integer
 * @index: index of bit to be set
 *
 * Return: 1 when bit is set and -1 on failing
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int mask = 1;
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);
	mask = 1 << index;
	*n = *n | mask;
	if ((*n >> index) & 1)
		return (1);
	else
		return (-1);

}
