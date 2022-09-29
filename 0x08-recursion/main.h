#ifndef _MAIN_
#define _MAIN_

/**
* _puts_recursion - prints a string
* @s: pointer to a char
* Return: string
*/
void _puts_recursion(char *s);

/**
* _putchar - puts a character
* @c: variable char
* Return: Always 0
*/
void _putchar(char c);

/**
* _print_rev_recursion - prints string in reverse
* @s: string
* Return: string in rev
*/
void _print_rev_recursion(char *s);

/**
* _strlen_recursion - returns the length of a string
* @s: pointer to string
* Return: length of a string
*/
int _strlen_recursion(char *s);

/**
* factorial - returns factorial of number
* @n: integer to be inputted
* Return: factorial of number
*/
int factorial(int n);

/**
* _pow_recursion - returns the value of x raised to the power of y
* @x: base
* @y: exponent
* Return: value of the exponentiation
*/
int _pow_recursion(int x, int y);

/**
* sqrt_mod - Recursive function to find a square root
* @n: Given number
* @i: Variable counter
* Return: Square root of a given number
*/
int sqrt_mod(int n, int i);

/**
* _sqrt_recursion - Square root of a given number
* @n: Integer variable
* Return: Integer variable
*/
int _sqrt_recursion(int n);

#endif
