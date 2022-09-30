#include <stdio.h>
#include <stdlib.h>
/**
*main - main function
*@argc: count
*@argv: vector
*Return: sum
*/
int main(int argc, char const *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%i\n", 0);
		return (0);
	}
	for (i = 1; i <= argc - 1; i++)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
