#include "main.h"
/**
 * _isalpha - checks characters that are alphabets
 * @m: is to check for m
 * Return: 1 otherwise 0
 */
int _isalpha(int m)
{
	if ((m >= 'a' && m <= 'z') || (m >= 'A' && m <= 'Z'))
	{
		return (1);
	}
	return (0);
}

