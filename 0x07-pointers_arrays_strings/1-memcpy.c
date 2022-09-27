#include "main.h"

/**
* _memcpy - copies memory area
* @dest: desination
* @src: source
* @n: an unsigned int for the bytes
* Return: A pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b;

	for (b = 0; dest[b] < n; b++)
	{}
	for (a = 0; src[a] < n; a++)
	{
	dest[b + a] = src[a]
	}
	return (dest);
}
