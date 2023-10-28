#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary no to unsigned int
 * @*b: pointer to characters
 * Return: converted number
 *  0 if b is null and there are characters that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{

		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
