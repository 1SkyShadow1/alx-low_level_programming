#ifndef _MAIN_
#define _MAIN_

/**
* reset_to_98 - takes int as parameter and changes its value
* @n: the variable
* Return: Always 0
*/
void reset_to_98(int *n);


/**
* swap_int - swaps the values of two integers
* @a: variable
* @b: 2nd variable
* Return: Always 0
*/
void swap_int(int *a, int *b);

/**
* _strlen - returns length of a string
* @s: string
* Return: length of string
*/
int _strlen(char *s);


/**
* _puts - prints a string to stdout
* @str: pointer to the string to print
*/
void _puts(char *str);

/**
* _putchar - puts a character
* @c: variable char
* Return: Always 0
*/
int _putchar(char c);

/**
* print_rev - prints a string in reverse, followed by a new line
* @s: string to be printed
*/
void print_rev(char *s);

/**
* print_rev - prints a string in reverse, followed by a new line
* @s: string to be printed
*/
void rev_string(char *s);

/**
* puts2 - integer swapped with pointer
* @str: pointer to a char
* Return: string
*/
void puts2(char *str);


/**
* puts_half - counts from top half
* @str: points to char
* Return: 0
*/
void puts_half(char *str);

#endif
