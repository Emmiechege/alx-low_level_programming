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
	int index1, index2; /* loop counters */

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
		for (index1 = 0; s1[index1] != '\0'; index1++)
		{
			result[index1] = s1[index1];
		}
		for (index2 = 0; s2[index2] != '\0'; index2++)
		{
			result[index1 + index2]= s2[index2];
		}
		result[index1 + index2] = '\0';
	}
	return (result);
	free(result);
}
