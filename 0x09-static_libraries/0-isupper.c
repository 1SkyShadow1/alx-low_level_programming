#include <stdio.h>
#include "main.h"
/**
* _isupper - prints number 1 or 0 if c lower or uppercase
* @c: character to compare
* Return: Always 0;
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
