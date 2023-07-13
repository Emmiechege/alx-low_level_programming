#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocated memory for an array, using malloc
 * @nmemb: no. of elements in an array
 * @size: size bytes of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		str[i] = 0;
	}
	return (str);
	free(str);
}
