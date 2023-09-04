#include "main.h"

/**
 * read_textfile - reads text and prints on screen
 * @filename: the file to read into and print from
 * @letters: number of letters to read and print
 * Return: actual number of letters to read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp; /*file descriptor*/
	int readd; /*number of bytes read*/
	int written; /*number of bytes printed*/
	char *buffer; /*temporarily stores data to read*/

	if (filename == NULL)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}
	readd = read(fp, buffer, letters);
	if (readd == -1)
	{
		free(buffer);
		return (0);
	}
	buffer[readd] = '\0';
	close(fp);
	written = write(STDOUT_FILENO, buffer, readd);
	if (written == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (written);
}
