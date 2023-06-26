#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @m: int to swap
 * @n: int to swap
 */
void swap_int(int *m, int *n)
{
	int o;

	o = *m;
	*m = *n;
	*n = o;
}
