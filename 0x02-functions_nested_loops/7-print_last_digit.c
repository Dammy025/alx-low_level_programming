#include "main.h"
/**
 *print_last_digit - function that prints last digit
 *@n: takes in an integer
 *Return: returns output
 */

int print_last_digit(int n)
{
	int ls = n % 10;

	if (n < 0)
		ls = ls * -1;
	_putchar(ls + '0');
	return (ls);
}
