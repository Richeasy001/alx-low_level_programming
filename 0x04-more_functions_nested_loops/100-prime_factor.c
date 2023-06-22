#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor of 612852475143
 * Return: 0 (Completed)
 */
int main(void)
{
	long int a;
	long int max;
	long int m;

	a = 612852475143;
	max = -1;

	while (a % 2 == 0)
	{
		max = 2;
		a /= 2;
	}

	for (m = 3; m <= sqrt(a); m = m + 2)
	{
		while (a % m == 0)
		{
			max = m;
			a = a / m;
		}
	}

	if (a > 2)
		max = a;

	printf("%ld\n", max);

	return (0);
}
