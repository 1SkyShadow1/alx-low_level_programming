#include "main.h"

/**
 * print_number - Prints integer
 * @n: integer variable
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');  /* Print negative sign for negative numbers*/
		n = -n;  /* Convert negative number to positive*/
	}

	if (n >= 10)
	{
		print_number(n / 10);  /* Recursive call to print digits recursively*/
	}

	_putchar('0' + n % 10);  /* Print the current digit*/

	if (n == 0 || n == -98)
	{
		_putchar('\n');  /* Print a newline character */
	}
}
