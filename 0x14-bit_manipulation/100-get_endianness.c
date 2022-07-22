#include "main.h"
/**
 * get_endianness - check if multibyte date is stored as little or big endian
 *
 * Return: first value store, if 0 big endian, 1if little endian
 */
int get_endianness(void)
{

	/* have a 4 byte int hold some hex number 0x00000001 */
	/* test if first byte stored is 00 or 01 */
	/* big endian would store 00, litte would store 01 */

	int n = 0x00000001;
	char *c = (char *)&n;

	return (c[0]);

}
