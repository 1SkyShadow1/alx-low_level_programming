#ifndef _MAIN_
#define _MAIN_

/**
* _memset - fills memory with a constant byte
* @*s: pointer to memory
* @b: constant byte
* @n: an unsigned int for the bytes
* Return: A pointer
*/
char *_memset(char *s, char b, unsigned int n);

/**
* _memcpy - copies memory area
* @dest: desination
* @src: source
* @n: an unsigned int for the bytes
* Return: A pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n);

/**
* _strchr - locates char in string
* @s: pointer to char
* @c: character
* Return: pointer
*/
char *_strchr(char *s, char c);

/**
* _strspn - search a string for a set of bytes
* @s: source string
* @accept: accepted string
* Return: number of bytes in the init segment
*/
unsigned int _strspn(char *s, char *accept);

#endif
