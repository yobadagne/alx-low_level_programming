#include <string.h>
/**
 *_strcat - conc strings
 *@dest: first
 *@src: second string
 *Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	j++;
	i++;
	}
	return (dest);
}
