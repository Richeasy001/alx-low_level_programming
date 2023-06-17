#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print base 10 using putchar'
 * Return: 0 (c0mplete)
 */
int main(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		putchar(m + 48);
	}
	putchar('\n');
	return (0);
}
