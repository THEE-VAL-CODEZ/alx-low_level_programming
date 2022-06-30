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


	printf("The size of an integer: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("The size of characters: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of long integer: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("The size of a long long integer: %lu byte(s)", (unsigned long)sizeof(e));
	return (0);
}
