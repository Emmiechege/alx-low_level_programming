#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function to print name.
 * @name: name to be printed
 * @f: pointer to the function to print name.
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		exit(98);
	}
}
