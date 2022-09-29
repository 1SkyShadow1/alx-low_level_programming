#include "main.h"
/**
* factorial - returns factorial of number
* @n: integer to be inputted
* Return: factorial of number
*/
int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0)
	return (1);
	else
	return (n * factorial(n - 1));
}
