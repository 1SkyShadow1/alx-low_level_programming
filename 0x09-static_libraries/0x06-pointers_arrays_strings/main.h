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

/**
* reverse_array - prints integers in reverse
* @a: pointer to int
* @n: number of elements of the array
* Return: int value
*/
void reverse_array(int *a, int n);

/**
* string_toupper - uppers a lower
* @s: character to make upper
* Return: string
*/
char *string_toupper(char *s);

/**
* leet - leet
* @s: string
* Return: char value
*/
char *leet(char *s);

/**
* _indexOf - returns boolean if special  character
* @a: character to print to stdout
* Return: true or false
*/
int _indexOf(char a);

/**
* cap_string - capitalizes the string
* @s: string
* Return: the string capitalized
*/
char *cap_string(char *s);

#endif
