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
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	dest[a] = src[a];
	}
	return (dest);
}
