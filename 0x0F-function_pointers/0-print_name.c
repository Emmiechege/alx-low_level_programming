#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
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
		f(name);
	}
	else
	{
		exit(98);
	}
}
