#include "main.h"
/**
* puts_half - counts from top half
* @str: points to char
* Return: 0
*
*/
void puts_half(char *str)
{
	int a, b, length, count;

	a = 0;

	while (*(str + a) != '\0')
	{
		a++;
	}
	length = a;
	if (length % 2 == 0)
	{
		count = length / 2;
	}
	else
	{
		count = (length - 1) / 2;
	}
	b = length - count;
	while (*(str + b) != '\0')
	{
		_putchar(*(str + b));
		b++;
	}
	_putchar('\n');
}
