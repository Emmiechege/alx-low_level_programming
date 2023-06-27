#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: char typr string
 * @src: char type string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}
