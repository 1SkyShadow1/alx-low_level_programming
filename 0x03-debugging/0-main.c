#include "main.h"
#include <time.h>
/**
* main - prints if 0 is zero
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	positive_or_negative(n);
	if (n == 0)
	{
	printf("%i is zero\n", n);
	}
	return (0);
}
