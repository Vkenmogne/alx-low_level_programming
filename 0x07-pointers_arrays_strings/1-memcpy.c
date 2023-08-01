#include "main.h"
/**
 *_memcpy - a function to copy memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int i = n;

	for (; t < i; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}

