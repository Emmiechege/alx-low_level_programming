#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Result of multiplication.
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');

		exit(98);
	}

	num1 = atoi(argv[1]); /* convert num1 from ASCII to integer using atoi */
	num2 = atoi(argv[2]); /* convert num2 from ASCII to integer using atoi */

	/* check if num1 and num2 are composed of digits */
	if (!isdigit(argv[1][0]) || !isdigit(argv[2][0]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');

		exit(98);
	}
	_putchar(num1 * num2 + '0'); /* print the result of mul */
	_putchar('\n');

	return (0);
}


