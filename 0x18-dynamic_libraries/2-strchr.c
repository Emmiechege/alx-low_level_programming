#include "main.h"
#include <stddef.h>

/**
 *_strchr - a function that locates a character in a string
 *
 *@s: string to be examined
 *@c: character to locate within the string
 *
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}
