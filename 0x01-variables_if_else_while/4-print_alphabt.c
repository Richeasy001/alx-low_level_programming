#include <stdio.h>
/**
 * main - Entry point
 * Description 'program is to print all alphabets except q and e'
 * Return: 0 (c0mpleted)
 */
int main(void)
{
	char n = 'a';

	while
		(n <= 'z'); {
		if (n == 'q' || n == 'e')
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
		}
	putchar('\n');
	return (0);
}
