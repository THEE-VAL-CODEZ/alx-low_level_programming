#include <stdio.h>

/**
 *  main - Entry point
 */

int main(void)
{
	int a;
	float b;
	char c;
	long int d;
	long long int e;


	printf("The size of an integer: %i byte(s)\n", (int)sizeof(a));
	printf("The size of a float: %i byte(s)\n", (int)sizeof(b));
	printf("The size of characters: %i byte(s)\n", (int)sizeof(c));
	printf("The size of long integer: %i byte(s)\n", (int)sizeof(d));
	printf("The size of a long long integer: %i byte(s)", (int)sizeof(e));
	return (0);
}
