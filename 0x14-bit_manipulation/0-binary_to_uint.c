#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 *
 * Return: Converted number or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{

	int len = 0, i;
	unsigned int sum = 0;

	if (b == NULL)
		return (sum);

	/* find string length */
	while (b[len] != '\0')
		len++;
	len -= 1;

	/* iterate string and if '1' then multiply by power of 2 */
	/* get power of 2 via binary (e.g. 1<<2 = 100 in binary = 4) */
	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);

		if (b[i] == '1')
			sum += (1 * (1 << len));
		i++;
		len--;
	}

	return (sum);
}
