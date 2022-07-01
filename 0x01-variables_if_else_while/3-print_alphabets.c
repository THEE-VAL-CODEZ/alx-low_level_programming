#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0(Success)
 */

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++) /* ascii code for a= 97 and z=122 */
		putchar(ch);


	for (ch = 65; ch <= 90; ch++) /* ascii code for A= 65 and Z=90 */
		putchar(ch);

	putchar(10); /* ascii code for new line */

	return (0);
}
