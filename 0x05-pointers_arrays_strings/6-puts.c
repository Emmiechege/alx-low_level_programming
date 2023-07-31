#include "main.h"
#include <stdio.h>
#include <string.h>

/*
 * puts2 - Prints out the numbers divisible by two.
 * @str: string input in the function
 *
 * Return: returns nothing.
 */

void puts2(char *str)
{
	int length;
	int index = 0;

	while (str[index] != '\0')
	{
		length++;
		index++;
	}

	for (index = 0; index < length; index += 2)
	{
		_putchar(str[index]);
	}
	putchar('\n');
}
