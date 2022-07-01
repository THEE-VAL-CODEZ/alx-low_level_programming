#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 *  main - Entry point
 *
 *  Return: 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 97 ; ch <= 122 ; ch++)
	{
		putchar(ch);
	}
	putchar(10); /* ascii code for new line */
	return (0);
}

