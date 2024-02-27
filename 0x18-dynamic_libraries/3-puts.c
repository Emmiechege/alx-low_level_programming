#include "main.h"

/**
  * _puts - prints a string
  * @str: string being printed
  */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
