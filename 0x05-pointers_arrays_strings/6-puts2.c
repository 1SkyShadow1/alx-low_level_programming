#include "main.h"
/**
* puts2 - integer swapped with pointer
* @str: pointer to a char
* Return: string
*
*/
void puts2(char *str)
{
	int j;

	for (j = 0; *(str + j) != '\0'; j++)
	{
	if (j % 2 == 0)
	_putchar(*(str + j));
	}
	_putchar('\n');
}
