#include "main.h"
/**
 * _print_rev_recursion - The function will print string in reverse
 * @s: String
 * Return: Always 0 (completed)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
