#include "main.h"
/**
* *_strcat - concatenates two strings
* @dest: pointer
* @src: pointer
* Return: Always 0
*/
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	dest++;
	dest--;
	while ((*dest = *src) != '\0')
	{
	dest++;
	src++;
	}
	_putchar('\n');
}
