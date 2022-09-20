#include "main.h"
#include <stdio.h>
/**
* rev_string - prints a string in reverse, followed by a new line
* @s: string to be printed
*/
void rev_string(char *s)
{
	char word[500];
	int i = 0, j, pos = 0;

	while (*(s + i) != '\0')
	{
	word[i] = *(s + i);
	i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
	*(s + pos) = word[j];
	pos++;
	}
}
