#include "main.h"
/**
 * print_binary - convert int number into binary
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int n_copy = n, mask = 1;
	int len = 0;

	while (n_copy > 0)
	{

		len++;
		n_copy >>= 1;
	}
	len--;
	/* create mask based on the lenght of num*/
	if (len > 0)
		mask = mask << len;
	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
