#include "main.h"
/**
 *_memcpy - This function will copy memory area
 *@dest: stored memory
 *@src: Source memory
 *@n: number of bytes
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
