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
	char *result;
	unsigned int len_s1;
	unsigned int len_s2;
	unsigned int total_length;

/* treat null as an empty string */
	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	
/* calculate lengths of s1 and s2 */
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

/* adjust n if its greater or equal to the length of s2 */

	if (n >= len_s2)
	{
		n = len_s2;
	}

/* calculate the total length of the concatenated string */
/* the 1 is the null terminator */
	total_length = len_s1 + n + 1;

/* allocate memory for the concatenated string */
	result = malloc(total_length);

/* if the allocation failed */
	if (result == NULL)
	{
		return (NULL);
	}

/* copy s1 to the result */
	strcpy(result, s1);

/* Concatenates the first n characters of s2 */
	strncat(result, s2, n);

	return (result);
}
