#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	fizzbuzz();
	return (0);

}

/**
 * fizzbuzz - function that print integer from 0 to 100.but print Fizz for numb
 * er multiple of 3 and Buzz for 5 multiples and print FizzBuzz for number boh\
 * multiple of 3 and 5 followed by new line
 */

void fizzbuzz(void)
{

	int counter;

	for (counter = 1; counter <= 100; ++counter)
	{

		if (counter % 3 == 0 && counter % 5 == 0)
		{
			if (counter != 100)
				printf("FizzBuzz ");
			else
				printf("FizzBuzz");
		}
		else if (counter % 5 == 0)
		{
			if (counter != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else if (counter % 3 == 0)
		{
			if (counter != 100)
				printf("Fizz ");
			else
				printf("Fizz");
		}
		else
			printf("%d ", counter);

	}
	printf("\n");
}
