#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of space
 * Return: pointer of the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
