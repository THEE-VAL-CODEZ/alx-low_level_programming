#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Print all possible two digits with the first number being less than the second one.
 *
 *  Return: 0
 */

int main(void)
{
	int x;
	int y;

	for (x = 0 && y = 1; x < 10 && y < 10; x++ && y++)
	{
		if (x == 1 && y == 0)
			continue;
		
		putchar(x);
		putchar(y);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);

}
