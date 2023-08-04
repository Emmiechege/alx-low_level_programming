#include <stdio.h>

/**
 * main - the main function.
 * @argc: number of arguments.
 * @argv: array of strings.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
		return (0);
}
