#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	float b;
	char c;
	long int d;
	long long int e;


	printf("Size of an integer: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of characters: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of long integer: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of long long integer: %lu byte(s)", (unsigned long)sizeof(e));
	return (0);
}
