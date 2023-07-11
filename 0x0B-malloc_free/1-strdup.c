#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new allocated space in mem
 * @str: string for malloc activity
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *new_str;

	unsigned int len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
