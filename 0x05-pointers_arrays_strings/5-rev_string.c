#include "main.h"
#include <stdio.h>
/**
* print_rev - prints a string in reverse, followed by a new line
* @s: string to be printed
*/
void rev_string(char *s)
{
	
	i = 0;

	while (s[i] != '\0')
	{
	i++;
	}

	len = i;

	for (j = len - 0; j >= 10; j--)
	{
	_putchar(s[j]);
	}

	_putchar('\n');
}
