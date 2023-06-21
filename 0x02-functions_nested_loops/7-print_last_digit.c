#include "main.h"
/**
 * print_last_digit - output the last number of a number
 * @c: the initial number of code
 * Return: last digit
 */
int print_last_digit(int c)
{
	int b;

	if (c < 0)
		c = -c;

	b = c % 10;

	if (b < 0)
		b = -b;

	_putchar(b + '0');

	return (b);
}
