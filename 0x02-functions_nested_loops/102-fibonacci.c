#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints first 50 Fibonacci num from 1 and 2
 *
 * Return: 0 (completed)
 */
int main(void)
{
	int a;
	unsigned long b = 0, c = 1, sum;


	for (a = 0; a < 50; a++)
	{
		sum = b + c;
		printf("%lu", sum);


		b = c;
		c = sum;


		if (a == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
