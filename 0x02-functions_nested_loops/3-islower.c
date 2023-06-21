#include "main.h"
/**
 * _islower - Run a check for lowercase
 * @m: is the char to be checked
 * Return: 1, otherwise 0.
 */


int _islower(int m)
{
	if (m >= 'a' && m <= 'z')
		return (1);
	else
		return (0);
}

