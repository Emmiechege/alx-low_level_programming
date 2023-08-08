#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - A function that concatnates strings
 * @dest: Destination
 * @src: source.
 *
 * Return: returns the concatnated string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

