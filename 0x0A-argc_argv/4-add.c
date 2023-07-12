#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main function
 * @argc: size of array
 * @argv: array
 * Return: 0 success, else 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	int i;

	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
