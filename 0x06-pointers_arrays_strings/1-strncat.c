#include "main.h"
/**
 *_strncat - string conc
 *@dest: first string
 *@src: seconf string
 *@n: integer
 *Return: conctinated
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
	while (src[a] != '\0' &&  a + 1 <=  n)
	{
		dest[i] = src[a];
		a++;
		i++;
	}
	return (dest);
}
