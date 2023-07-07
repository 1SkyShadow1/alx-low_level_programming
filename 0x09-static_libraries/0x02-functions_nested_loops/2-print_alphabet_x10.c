#include"main.h"
/**
* print_alphabet_x10 - prints alphabet 10 times
* Return: always 0;
*/
void print_alphabet_x10(void)
{
	char alpha;
	char tenalpha;

	for (tenalpha = '0'; tenalpha <= '9'; tenalpha++)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}
	_putchar('\n');

	}
}
