#include 'main.h'

/**
 *  main - Entry point
 *
 *  Return: 0
 *
 *  Print alphabet in lower case followed by new line
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}


