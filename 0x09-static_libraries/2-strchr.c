#include "main.h"
#include <stdio.h>
/**
* _strchr - locates char in string
* @s: pointer to char
* @c: character
* Return: pointer
*/
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
	a++;
	}

	for (b = 0; b <= a; b++)
	{
	if (c == s[b])
	{
	s += b;
	return (s);
	}
	}

	return ('\0');
}
