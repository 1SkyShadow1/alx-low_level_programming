#ifndef _MAIN_
#define _MAIN_

/**
* _isupper - prints out number if upper or lowercase
* @c: parameter to compare
* Return: 1 or 0
*/
int _isupper(int c);

/**
* -isdigit.c - checks for a digit
* @c: parameter being checked
* Return: 1 if c is digit 0 if not
*/
int _isdigit(int c);

/**
* mul - multiplies two integers
* @a: int
* @b: int
* Return: value of a * b
*/
int mul(int a, int b);

/**
* print_numbers - prints numbers from 0 to 9
* @n: is the input
* _putchar represents putchar
* Return: Always 0
*/
void print_numbers(void);

/**
* _putchar - writes the character c to std
* @c: parameter to compare
* Return: 1 or 0
*/
int _putchar(char c);

/**
* print_most_numbers - prints numbers beside 2 and 4
*
* Return: result
*/
void print_most_numbers(void);

/**
* more_numbers - prints numbers from 0 to 14
*
* Return: nothing
*/
void more_numbers(void);

/**
* print_line - printing line n times
* @n:value to be checked
* Return: result
*/
void print_line(int n);

/**
* print_diagonal - prints diagonal line
* @n: number to be checked
* Return: nothing
*/
void print_diagonal(int n);

/**
* print_square - prints square
* @size: value to be checked
* Return: nothing
*/
void print_square(int size);

/**
* main - show us the numbers that may be divided by 3 and 5 and both of them
* Return: Always 0.
*/
int main(void);

#endif
