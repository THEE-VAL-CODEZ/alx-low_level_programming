#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
		putchar(ch);

	for (ch = 97; ch <= 102; ch++)
		putchar(ch);

	putchar(10);
	return (0);
}
