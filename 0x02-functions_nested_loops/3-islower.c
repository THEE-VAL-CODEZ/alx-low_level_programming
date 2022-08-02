#include "main.h"

/**
 *  _islower - begin here
 *  @c: character ascii code
 *  return 1 if lower and 0 otherwise
 *  Return: Value 0 success
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);

	}
	else
	{
		return (0);

	}
	_putchar('\n');
}
