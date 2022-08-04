#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - passed as arguments
 * @n: num of args passed
 * @separator: word separators
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;

	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);
		if (ptr != NULL)
			printf("%s", ptr);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
