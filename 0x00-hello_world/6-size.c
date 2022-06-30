#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{

	printf("Size of an integer: %lu byte(s)\n", sizeof(int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	printf("Size of characters: %lu byte(s)\n", sizeof(char));
	printf("Size of long integer: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long integer: %lu byte(s)", sizeof(long long int));
	return (0);
}
