#include "main.h"
/**
* _strncpy - copies one str to another
* @dest: pointer for destination
* @src: pointer for source
* @n: number of times to append
* Return: char value
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int b;

	*src = *dest;
	for (b = 0; dest[b] != '\0'; b++)
	{}

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
	dest[b + a] = src[a];
	}
	dest[b + a] = '\0';
	return (dest);
	}
}
