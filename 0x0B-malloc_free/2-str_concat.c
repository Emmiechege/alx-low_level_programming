#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: pointer on a new allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0;
	char *str;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len = (strlen(s1) + strlen(s2) + 1);
	str = (char *)malloc(sizeof(char) * len);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			str[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			str[i] = s2[j];
			i++;
		}
		str[i + j] = '\0';
	}
	return (str);
	free(str);
}
