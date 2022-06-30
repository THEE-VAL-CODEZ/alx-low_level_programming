#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	long long int b;
	char c;
	long int d;
	float f;

	printf("Size of integer: %lu byte(s)\n", sizeof(a));
	printf("Size of long long int: %lu bytes\n", sizeof(b));
	printf("Size of character: %lu byte(s)", sizeof(c));
	printf("Size of long integer: %lu bytes", sizeof(d));
	printf("Size of float: %lu bytes", sizeof(f));
	return (0);
}
