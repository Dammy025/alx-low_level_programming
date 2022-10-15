#include <stdio.h>
/**
 * main-program entry point
 * Return: 0 no error, non zero if error
 **/
int main(void)
{
	char d;

	for (d = 'z'; d >= 'a'; d--)
		putchar(d);
	putchar('\n');
	return (0);
}
