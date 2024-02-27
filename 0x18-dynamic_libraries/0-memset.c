#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: pointer to a memory area
 * @n: bytes to be filled with in the memory area
 * @b: constant bytes to fill memory area
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
