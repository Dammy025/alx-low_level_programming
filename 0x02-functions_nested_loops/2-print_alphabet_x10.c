#include <stdio.h>
/**
 * print_alphabet - print 10 times the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char har;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (har = 'a'; har <= 'z'; har++)
			putchar(har);
		putchar('\n');
	}
}
