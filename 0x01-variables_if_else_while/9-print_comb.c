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
		if (m == 57)
		{
			m++;
			break;
		}
		putchar(m);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
