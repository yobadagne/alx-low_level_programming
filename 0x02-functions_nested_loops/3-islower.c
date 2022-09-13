#include <stdio.h>
/**
 *_islower - lower case
 *Return: int
 */
int _islower(int c)
{
	int r;
	
	if (c >= 65 && c <= 90)
	{
		r = 0;
	}
	else if (c >= 97 && c <= 122)
	{
		r = 1;
	}
	return r;
}
