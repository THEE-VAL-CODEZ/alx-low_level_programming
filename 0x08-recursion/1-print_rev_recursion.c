#include <stdio.h>

/**
 *  _print_rev_recursion - prints string in reverse followed a new line
 *
 *  @s: Pointer to string
 *
 *  Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
