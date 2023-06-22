#include "main.h"

/**
 * _isupper - uppercase alphabets
 * @a: char to check
 *
 * Return: 1 else 0
 */

int _isupper(int a)
{
	if (a >= 65 && a <= 90)
		return (1);
	else
		return (0);
}
