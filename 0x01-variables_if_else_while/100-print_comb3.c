#include <stdio.h>

/**
 * main -Entry of the program
 * for -block printing combinations of two digits
 *
 * Return: Always 0(sucess)
 */

int main(void)
{

	int num1;
	int num2 = 49;
	int tmp2;

	for (num1 = 48; num1 <= 56; num1++)
	{
		tmp2 = num2;

		for  (; tmp2 <= 57; tmp2++)
		{
			putchar(num1);
			putchar(tmp2);

			if (num1 != 56)
			{
				putchar(44);
				putchar(32);
			}

		}

		num2++;
	}

	putchar(10);

	return (0);


}
