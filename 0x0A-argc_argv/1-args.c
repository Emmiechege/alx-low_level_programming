#include <stdio.h>

/**
 * main - the main function.
 * @argc: argument count.
 * @argv: array of strings.
 * Return: 0 success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
/* we subtract  - 1 to exclude the  program name from parameter list */
