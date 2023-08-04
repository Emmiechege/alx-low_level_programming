#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function.
 * @argc: argument count.
 * @argv: array of strings.
 * atoi - converts a string to integer.
 * Return: 1 if arguments are not 2,else 0.
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);

	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
