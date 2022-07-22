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

	int bit;
	unsigned int max_bits = 0;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* shift number places right to find bit */
	bit = ((n >> index) & 1);

	return (bit);

}
