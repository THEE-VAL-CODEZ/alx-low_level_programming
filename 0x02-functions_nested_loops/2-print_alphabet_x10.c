#include "main.h"

/**
 *  print_alphabet_x10 - print a-z and A-Z in putchar
 *  Return: Value 0 success
 */

void print_alphabet_x10(void)

{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	_putchar('\n');

	}
}
