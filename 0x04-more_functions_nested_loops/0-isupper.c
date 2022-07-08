#include "main.h"

#include <stdio.h>

/**
 *  main - check the code
 *
 *  Return: Always 0.
 */


int _isupper(int c);


int main(void)

{
	char c;

	if (c >= 'A' &&  <= 'Z')
		printf("%c: %d\n", c,  _isupper(c));
			return (1);
	
	else

		printf("%c: %d\n", c,  _isupper(c));
			return (0);
}	
	

