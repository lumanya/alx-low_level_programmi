#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entrypoint of the program
 * if -else block testing rnadmon number
 *
 * Return: Always o for (success)
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{

		printf("%d is postive\n", n);

	} else if (n < 0)
	{

		printf("%d is negative\n", n);

	} else
        {

		printf("%d is zero\n", n);

	}

	return (0);
}
