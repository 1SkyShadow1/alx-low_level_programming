#include "main.h"
#include <string.h>
/**
* *_strncat - concatenates two strings
* @dest: pointer for destination
* @src: pointer for source
* @n: bytes for source
* Return: char value
*/
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (b = 0; dest[b] != '\0'; b++)
	{}

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
	dest[b + a] = src[a];
	}
	dest[b + a] = '\0';

	return (dest);
}
