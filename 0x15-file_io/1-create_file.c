#include "main.h"

/**
 * create_file - creates a file
 * @filename: a pointer to the name of the file to be created
 * @text_content: A pointer to a string to be written to the file
 * Return: 1 0n success, -1 on failure when,
 * file can not be created,
 * file cannot be written,
 * write “fails”
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, i = 0;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		{
			length++;
		}
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);

	return (1);
}
