#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened
 * @file_from: file_from
 * @file_to: file_to
 * @argv: arguments vctor
 * return: no return
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
