#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @c: num when \ will be printed
 * Return: 0
 */

void print_diagonal(int c)
{
	if (c <= 0)
	{
		_putchar('\n');
	} else
	{
		int a, b;

		for (a = 0; a < c; a++)
		{
			for (b = 0; b < c; b++)
			{
				if (b == a)
					_putchar('\\');
				else if (b < a)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
