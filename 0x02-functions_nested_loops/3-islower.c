#include <stdio.h>
/**
 *_islower - lower case
 *@c: integer
 *Return: int
 */
int _islower(int c)
{
	int r;

	if (c >= 97 && c <= 122)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
