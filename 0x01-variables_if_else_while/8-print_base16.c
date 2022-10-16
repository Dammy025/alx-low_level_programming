#include <stdio.h>
/**
 * main-program entry point
 * Return: 0 no error, non zero if error
 **/
int main(void)
{
	int b;
	char hexavalues[] = "0123456789abcdef";

	for (b = 0; b < 16; b++)
	{
		putchar(hexavalues[b]);
	}
	putchar('\n');
	return (0);
}
