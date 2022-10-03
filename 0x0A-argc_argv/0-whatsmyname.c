#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _whatsmyname - prints program name
* @argc: number of prog lines
* @argv: char in  prog
* Return: name of prog
*/
int _whatsmyname(int argc, char *argv)
{
	char i;

	if (argc == 1)
	{
	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	}
}
