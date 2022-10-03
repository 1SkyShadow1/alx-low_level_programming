#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - prints program name
* @argc: number of prog lines
* @argv: char in  prog
* Return: name of prog
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
