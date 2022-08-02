#include 'main.h'

/**
 *  print_alphabet - Entry point
 *
 *  Return: 0
 *
 *  print_alphabet - in lower case followed by new line
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}


