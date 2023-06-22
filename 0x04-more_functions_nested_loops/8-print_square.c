#include "main.h"
/**
 * print_square - to print a square snd a new line;
 * @c: square size
 */
void print_square(int c)
{
	if (c <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < c; a++)
		{
			for (b = 0; b < c; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
