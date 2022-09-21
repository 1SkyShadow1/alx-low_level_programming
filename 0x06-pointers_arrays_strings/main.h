#ifndef _MAIN_
#define _MAIN_

/**
*_strcat - concatenates two strings
* @dest: pointer
* @src: pointer
* Return: Always 0
*/
char *_strcat(char *dest, char *src);

/**
* _putchar - puts a character
* @c: variable char
* Return: Always 0
*/
int _putchar(char c);

/**
* *_strncat - concatenates two strings
* @dest: pointer for destination
* @src: pointer for source
* @n: bytes for source
* Return: char value
*/
char *_strncat(char *dest, char *src, int n);

/**
* *_strncpy - copies one str to another
* @dest: pointer for destination
* @src: pointer for source
* @n: number of times to append
* Return char value
*/
char *_strncpy(char *dest, char *src, int n);

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: value of string
*/
int _strcmp(char *s1, char *s2);

#endif
