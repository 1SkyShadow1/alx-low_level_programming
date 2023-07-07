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

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
	dest[a] = src[a];
	}
	for (; a < n; a++)
	{
	dest[a] = '\0';
	}
	return (dest);
}
