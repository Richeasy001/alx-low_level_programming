#include "main.h"

/**
 * print_rev - The block will imprime en reversa
 * @a: string to be printed
 * return: 0
 */
void print_rev(char *a)
{
	int longi = 0;
	int o;

	while (*a != '\0')
	{
		longi++;
		a++;
	}
	a--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*a);
		a--;
	}

	_putchar('\n');
}
