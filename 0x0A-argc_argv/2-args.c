#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{

	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
