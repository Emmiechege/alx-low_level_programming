#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big indian, 1 if little indian
 */

int get_endianness(void)
{
	unsigned int m = 1;
	char *b = (char *) &m;

	if (*b)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
