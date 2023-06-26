#include "main.h"

/**
 * print_array - a function that prints elements of an array
 * @a: array
 * @b: is the num of elements of array to be printed
 * Return: input a and b
 */
void print_array(int *a, int b)
{
	int i;

	for (i = 0; i < (b - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (b - 1))
		{
			printf("%d", a[b - 1]);
		}
			printf("\n");
}
