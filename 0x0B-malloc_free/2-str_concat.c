#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string to concatenate.
 * @s2: string to concatenate.
 * Return: pointer on a new allocated space.
 */
char *str_concat(char *s1, char *s2)
{
	int length = 0; /*stores length of concatenated string */
	char *result; /* pointer to newly allocated memory */

	if (s1 == NULL)
	/*returns an empty string if the string is null */
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length = (strlen(s1) + strlen(s2) + 1);
	result = malloc(length);

	if (result == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(result, s1);
		strcat(result, s2);
	}
	return (result);
	free(result);
}
