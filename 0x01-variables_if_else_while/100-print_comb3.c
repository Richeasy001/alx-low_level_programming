#include <stdio.h>
/**
 * main - Entry point
 * Description: Print double numbers without repeatition
 * Return: 0 (completed)
 */
int main(void)
{
	int a = 0, b = 8, c = 1, d = 9, tmp = 1;

	while (a <= b)
	{
		c = tmp;

		while (c <= d)
		{
			putchar(a + '0');
			putchar(c + '0');
			c++;

			if (a != b)
			{
				putchar(',');
				putchar(' ');
			}
		}

		tmp++;
		a++;
	}
	putchar('\n');
	return (0);
}
