#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 *  main = Entry point
 *
 *  return = Always 0()success
 *
 *  more headers go there
 *
 *  betty style doc for function main goes there
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RANDMAX / 2;

	if (n > 0)
		printf("%d is positive", n);

	else if (n < 0)
		printf("%d is negative", n);

	else
		printf("%d is zero", n);

	return (0);

}


