#include <stdio.h>
/**
 * main - print alphabets in reverse
 * Return: 0 (completed)
 */
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
