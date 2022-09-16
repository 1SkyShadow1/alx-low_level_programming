#include "main.h"
/**
* print_numbers - prints numbers from 0 to 9
* _putchar represents putchar
* Return: Always 0
*/
void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
	_putchar(n + '0');
	n++;
	}
	_putchar('\n');
}
