#include "main.h"
/**
* reverse_array - prints integers in reverse
* @a: pointer to int
* @n: number of elements of the array
* Return: int value
*/
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
	j = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = j;
	}
}
