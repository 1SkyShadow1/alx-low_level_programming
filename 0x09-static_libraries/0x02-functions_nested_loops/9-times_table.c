#include"main.h"
/**
* times_table - times table function for 9
*/
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	int tab = j * i;

	if (j == 0)
	{
	_putchar('0');
	}
	else if (tab <= 9)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(tab + '0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar(tab / 10 + '0');
	_putchar(tab % 10 + '0');
	}
	}
	_putchar('\n');
	}
}
