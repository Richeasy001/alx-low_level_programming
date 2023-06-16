#include <stdio.h>
/**
 * main - Print lower and upper case
 * Return: 0 (completed)
 */

int main(void)
{
	char m;

	char n;

	m = 'a';
	n = 'A';

	while
		(m <= 'z') {
			putchar(m);
			m++;
		}
	while
		(n <= 'Z') {
			putchar(n);
			n++;
		}
	putchar('\n');
	return (0);
}
