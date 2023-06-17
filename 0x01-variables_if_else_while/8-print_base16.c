#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print base 16'
 * Return: 0 (completed)
 */
int main(void)
{
	int n = 48;
	char m = 'a';

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (m <= 'f')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
