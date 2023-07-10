#include "main.h"

/**
 * wildcmp - Compare two strings and determines if they are identical
 * @s1: pointer to string params,the first string to compare
 * @s2: pointer to string params,it can contain the special character
 * which can replace any string (including an empty string)
 * Returns: i if the strings are identical,0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && s2 == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{

		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
