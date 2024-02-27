#include "main.h"
#include <string.h>
/**
 * _strncpy - function that copies a string
 * @dest: destination of the copied characters
 * @src: source of the characters to be copied
 * @n: the number of strings to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
	*(dest + i) = '\0';
	i++;
	}
	return (dest);
}
