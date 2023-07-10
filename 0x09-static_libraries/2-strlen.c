#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The input string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
