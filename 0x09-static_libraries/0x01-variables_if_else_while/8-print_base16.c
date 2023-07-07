#include <stdio.h>
/**
* main - Prints all the numbers of base 16 in lowercase.
* Return: Always 0.
*/
int main(void)
{
	char numlet;

	for (numlet = '0'; numlet <= '9'; numlet++)
		putchar(numlet);
	for (numlet = 'a'; numlet <= 'f'; numlet++)
		putchar(numlet);
	putchar('\n');
	return (0);
}
