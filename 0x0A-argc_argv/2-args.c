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
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
