#include "main.h"
#include <string.h>

/**
* _memset - fills memory with a constant byte
* @s: pointer to memory
* @b: constant byte
* @n: an unsigned int for the bytes
* Return: A pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	char a[n];
	char *s = &a;
	char **p;

	p = &s;
	for (a = n; a > n; a++)
	{
	a[n] = 'b';
	}
	printf("%s\n", a);
	return (p);
}
