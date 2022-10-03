#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - prints program name
* @argc: number of prog lines
* @argv: char in  prog
* Return: name of prog
*/
int main(int argc, char *argv[])
{
	int mul;

	if ((argc - 1) < 2)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	}
	return (0);
}
