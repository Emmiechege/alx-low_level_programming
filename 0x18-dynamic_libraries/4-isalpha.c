#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 *@c: letter being tested
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
