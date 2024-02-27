#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 *@s: string to scan for characters
 *@accept: string containing characters to match
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
		if (!*(accept + j))
			break;
	}
	return (i);
}
