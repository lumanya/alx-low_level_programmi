#include <stdio.h>

/**
 * main - entry point of the program
 * for - block printing single digit number
 *
 * Return:Always 0(succes)
 */

int main(void)
{

	int num;

	for (num = 48; num <= 57; num++)
		putchar((char)num);

	putchar('\n');

	return (0);


}
