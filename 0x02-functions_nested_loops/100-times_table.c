#include "main.h"
/**
 * print_times_table - prints times table, starts from 0
 * @a: number of the times table
 */
void print_times_table(int a)
{
	int m, n, o;

	if (a >= 0 && a <= 15)
	{
		for (m = 0; m <= a; m++)
		{
			for (n = 0; n <= a; n++)
			{
				o = n * m;
				if (n == 0)
				{
					_putchar(o + '0');
				} else if (o < 10 && n != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(o + '0');
				} else if (o >= 10 && o < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((o / 10) + '0');
					_putchar((o % 10) + '0');
				} else if (o >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((o / 100) + '0');
					_putchar(((o / 10) % 10) + '0');
					_putchar((o % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

