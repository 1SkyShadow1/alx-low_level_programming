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
	unsigned int b;

	for (a = 0; a < n; a++)
	{}
	for (b = 0; b < n; b++)
	{
	src[a + b] = dest[a];
	}
	src[a + b] = '\0';
	return (dest);
}
