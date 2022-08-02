#include "main.h"

/**
 *  _isalpha - Begin here
 *  @c: character ascii code
 *  Return: value 0 success
 *  return 1 if lower or upper case is c
 */
int _isalpha(int c)
{
	if ((c <= 'Z' && c >= 'A') || (c >= 'a' && c <= 'z'))
	{
		return (1);

	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
