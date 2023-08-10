#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * @n: number of bytes.
 * Return: pointer to the allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, index;
	char *new_str;

	/* if string s1 and s2 are NULL return empty string */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (index = 0; s1[index]; index++)
	{
		len++;
	}
	/* Dynamically allocate memory for the new string */
	new_str = malloc(sizeof(char) * (len + 1));

	/* Check if returned pointer by malloc is NULL or not */
	if (new_str == NULL)
	{
		return (NULL);
	}
	len = 0;

	for (index = 0; s1[index]; index++)
	{
		new_str[len++] = s1[index];
	}
	for (index = 0; s2[index] && index == n; index++)
	{
		new_str[len++] = s2[index];
	}
	new_str[len] = '\0';
	return (new_str);
}

