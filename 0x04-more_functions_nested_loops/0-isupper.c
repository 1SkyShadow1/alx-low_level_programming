#include <stdio.h>
#include "main.h"
/**
* _isupper - prints number 1 or 0 if c lower or uppercase
* @c: character to compare
* Return: Always 0;
*/
int _isupper(int c)
{
	char c;

	if (c == 'C')
	{
		printf("%c: %d\n", c, _isupper(c));
	}
	else if (c == 'c')
	{
		printf("%c: %d\n", c, _isupper(c));
	}
	return (0);
}
