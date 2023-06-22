#include "main.h"
/**
 * _isdigit - check for integers 0 to 9
 * @a: char to be checked
 *
 * Return: 0 else 1
 */

int _isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	else
		return (0);
}
