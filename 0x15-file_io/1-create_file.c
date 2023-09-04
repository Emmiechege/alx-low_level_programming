#include "main.h"

/**
 * create_file - crates a file
 * @filename: name of file to create
 * @text_content: context to be written in the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp; /*file descriptor*/
	int written; /*number of bytes to write*/
	int f = 0; /*counter for text_content*/

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[f])
			f++;
		written = write(fp, text_content, f);
		if (written != f)
		{
			return (-1);
		}
	}
	close(fp);
	return (1);
}

