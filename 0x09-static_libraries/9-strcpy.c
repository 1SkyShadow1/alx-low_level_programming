#include "main.h"
/**
* _strlen - returns the length
* @s: string
* Return: length
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}

	return (len);
}

/**
* _strcpy - copies the string
* including the terminating nullbyte (\0),
* to the buffer pointed to by dest
* @dest: copy source
* @src: source
* Return: copy of original source
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	dest[i] = src[i];

	return (dest);
}
