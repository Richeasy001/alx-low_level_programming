#include "main.h"
/**
 * _strchr - Function for character location
 * @c: character input
 * @s: string input
 * Return: Always 0 (Completed)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
