#include "main.h"
/**
 * print_triangle - prints triangle and a new line
 * @c: triangle size
 */
void print_triangle(int c)
{
	if (c <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 1; a <= c; a++)
		{
			for (b = a; b < c; b++)
			{
				_putchar(' ');
			}

			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
