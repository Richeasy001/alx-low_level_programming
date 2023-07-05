#include "main.h"
/**
 * _puts_recursion - This will put output
 * @s: input to string
 * Return: Always 0 (Completed)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
