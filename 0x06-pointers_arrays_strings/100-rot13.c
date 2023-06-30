#include "main.h"
#include <string.h>
/**
 * rot13 - encodes a string using rot13.
 * @str: string to be encoded
 * Return: Encoded str
 */
char *rot13(char *str)
{
	int i, j;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (s1[j] != '\0')
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;

			}
			j++;

		}
		i++;

	}
	return (str);
}
