#include <stdio.h>
/**
*_strlen_recursion - num of char
*@s: string
*Return: sum
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
