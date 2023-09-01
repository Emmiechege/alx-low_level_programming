#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binaty no to a unsigned int
 * @b: pointer to string that contains binary no
 * Return: 0 if NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum_dec = 0;

	/* check if the output of the string is null */
	if (b == NULL)
	{
		return (0);
	}
	/* iterate through the characters in the string until the end */
	while (*b != '\0')
	{
		/* check if the current character is not '0' or '1' */
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		else
		{
			/* convert the binary digits to its decimal and convert the char to int*/
			sum_dec = sum_dec * 2 + (*b - '0');
			b++; /* move to next character in string */
		}
	}

	return sum_dec;
}
