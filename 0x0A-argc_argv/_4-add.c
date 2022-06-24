#include <stdio.h>
#include <stdlib.h>
/**
 * main - print sum of arguments numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 Always sucess and 1 Error
 */

int main(int argc, char *argv[])
{
	int count, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc >= 2)
	{
		for (count = 1; count < argc; count++)
		{
			if (atoi(argv[count]) == 0 && *argv[count] != 48)
			{
				printf("Error\n");
				return (2);
			}
			else
			{
				sum = sum + atoi(argv[count]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
