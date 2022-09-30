#include <stdio.h>
#include "main.h"
/**
*main - name print
*@argc: no of arg
*@argv: pointer
*Return: zero
*/
int main(int argc, char *argv[])
{
	if (argc != 0)
	for (; *argv[0] != '\0';)
	{
		_putchar(*argv[0]);
		argv[0]++;
	}
	_putchar('\n');
	return (0);
}
