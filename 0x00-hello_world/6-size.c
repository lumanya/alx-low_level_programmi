#include <stdio.h>

/**
 * main -Entry point of the program
 * printf -c function printing formated string
 * sizeof - c functio output size of data tyep
 *
 * Return:Always 0 (sucess)
 */

int main(void)
{

	printf("Size of a char:%d byte(s)", sizeof(char));
	printf("Size of an int:%d byte(s)", sizeof(int));
	printf("Size of a long int:%d byte(s)", sizeof(long));
	printf("Size of long long int:%d byte(s)", sizeof(long long int));
	printf("Size of a float:%d byte(s)", sizeof(float));

	return (0);

}
