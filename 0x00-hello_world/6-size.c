#include <stdio.h>
/**
 *main - -main
 *
 * Return: returns zero
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n",sizeof(int));	
	printf("Size of a long int:%lu byte(s)\n", sizeof(long int));
	printf("SIze of a long long int:%lu byte(s)\n", sizeof(long long int));
	printf("Size of float:%lu byte(s)", sizeof(float));
	return (0);
}

