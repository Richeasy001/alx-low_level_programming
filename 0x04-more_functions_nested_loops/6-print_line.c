#include "main.h"
/**
 * print_line - To print a straight line
 * @a: Variable for integer
 * Return: void
 */
void print_line(int a)
{
	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= a; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
