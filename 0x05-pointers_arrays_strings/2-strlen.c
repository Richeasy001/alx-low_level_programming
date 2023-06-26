#include "main.h"
/**
 * _strlen - returns a string lenght
 * @m: string
 * Return: length
 */
int _strlen(char *m)
{
	int longi = 0;

	while (*m != '\0')
	{
		longi++;
		m++;
	}

	return (longi);
}
