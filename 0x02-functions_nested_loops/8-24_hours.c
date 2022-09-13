#include "main.h"

/**
* jack_bauer - time
*/
void jack_bauer(void)
{
	int alpha;
	int j:
	
	for (alpha = 0; alpha <= 23; alpha++)
	{
	for (j = 0; j <= 59; j++)
	{
	_putchar(alpha / 10 + '0');
	_putchar(alpha % 10 + '0');
	_putchar(':');
	_putchar(j / 10 + '0');
	_putchar(j % 10 + '0');
	_putchar('\n');
	}
	}
}
