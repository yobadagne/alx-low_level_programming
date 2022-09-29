/**
*_pow_recursion - returns power
*@x: first
*@y: second
*Return: power
*/
#include <stdio.h>
int _pow_recursion(int x, int y)
{	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, (y - 1))));
}
