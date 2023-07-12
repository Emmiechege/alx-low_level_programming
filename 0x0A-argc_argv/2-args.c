#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of arguments/size of array
 * @argv: the array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
