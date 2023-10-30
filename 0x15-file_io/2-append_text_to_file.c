#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to a file with the text to be appended
 * @text_content: pointer to the text to be appended
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (filename == NULL)
	{
		return (-1);
	}

	o = open(filename, O_WRONLY | O_APPEND);

	if (o == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}

		w = write(o, text_content, len);

		if (w == -1)
			return (-1);
	}

	close(o);

	return (1);
}
