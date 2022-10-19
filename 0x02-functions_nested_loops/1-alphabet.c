#include <stdio.h>

/**
 * print_alphabet - prints all alphabets in lowercase.
 * Return: On success 1.
 */
void print_alphabet(void)
{
	int a = 97;
	int z = 122;
	int let = '\n';

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	putchar(let);
}
