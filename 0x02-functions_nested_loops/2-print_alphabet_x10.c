#include "main.h"

/**
 * print_alphabet_x10 - prints all the alphabets in lowercase 10 times.
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
	int spiro = 48;
	int mor = '\n';

	while (spiro < 58)
	{
		int ally = 97;
		int pull = 122;

		while (ally <= pull)
		{
			_putchar(ally);
			ally++;
		}
		spiro++;
		_putchar(mor);
	}
}
