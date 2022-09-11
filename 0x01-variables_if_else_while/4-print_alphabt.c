#include <stdio.h>
/**
* main - print if the number is postive, zero, or negative
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
