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


	int CH;

	for (CH = 65; CH <= 90; CH++) /* ascii code for A= 65 and Z=90 */
		putchar(CH);

	putchar(10); /* ascii code for new line */

	return (0);
}
