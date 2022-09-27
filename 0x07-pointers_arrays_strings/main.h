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

#endif
