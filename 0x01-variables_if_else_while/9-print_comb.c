#include <stdio.h>
/**
 * main - print base 10 with comma and space
 * Return: 0 (completed)
 */
int main(void)
{
	int m;

	for (m = 48; m <= 57; m++)
	{
		putchar(m);
		putchar(',');
		putchar(' ');
		break;
	}
	putchar('\n');
	return (0);
}
