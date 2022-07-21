#include "main.h"
/**
 * get_bit - return value of bit at given index
 * @n: integer evaluated
 * @index: represent position of bit
 *
 * Return: on sucess bit at given index and -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int n_copy = n, mask;
	unsigned int len = 0;

	while (n_copy > 0)
	{
		len++;
		n_copy >>= 1;
	}
	if (index >= len)
		return (-1);
	if (index > 0)
		mask = 1 << index;
	n = n & mask;
	return (n >> index);
}
