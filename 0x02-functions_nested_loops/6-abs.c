#include <stdio.h>
/**
 *_abs - absolute
 *@n: parameter
 *Return- int
 *
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
		return (0);
}
