#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
