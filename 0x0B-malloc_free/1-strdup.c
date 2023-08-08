#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory.
 * @str: the string.
 * Return: NULL for insufficient memory or when str = NULL
 * pointer to a new string on success.
 */
char *_strdup(char *str)
{
	char *new_string; /* array that will hold the values of the new string */

	if (str == NULL)
	{
		return (NULL);
	}
	new_string = malloc(strlen(str) + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}
	strcpy(new_string, str);
	return (new_string);
}
