#include "main.h"
#include <stdio.h>
/**
* swap_int - swaps the values of two integers
* @a: variable
* @b: 2nd variable
* Return: Always 0
*/
void swap_int(int *a, int *b)
{
	int swap = a;

	a = b;
	b = swap;
	return (0);
}
