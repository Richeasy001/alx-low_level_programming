#include "main.h"

/**
 * char *_strcpy - This func will copy the string pointed to by src
 * @a: copy to
 * @b: copy from
 * Return: string
 */
char *_strcpy(char *a, char *b)
{
	int l = 0;
	int x = 0;

	while (*(b + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		a[x] = b[x];
	}
	a[l] = '\0';
	return (a);
}
