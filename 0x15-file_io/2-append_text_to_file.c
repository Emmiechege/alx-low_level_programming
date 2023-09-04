#include "main.h"

/**
 * append_text_to_file - appends a text to file
 * @filename: name of the file
 * @text_content: content to append to file
 * Return: 1 0n success 0 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int appendd; /*no of bytes to append*/
	int f = 0; /*counter of the text_content*/
	int fp; /*file descriptor*/

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[f])
			f++;
		appendd = write(fp, text_content, f);
		if (appendd != f)
		{
			return (-1);
		}
	}
	close(fp);
	return (1);
}
