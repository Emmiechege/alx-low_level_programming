#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Creates a buffer and allocated 1024 bytes
 * @file: Name of the file buffer is storing characters for
 * Return: pointer to the created buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes any file descriptor
 * @fd: file descriptor to be closed
 * Return: Nothing
 */

void close_file(int fd)
{
	int cls;

	cls = close(fd);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
	}
}

/**
 * main - copies contents of a file to another file
 * @argc: Number of arguments
 * @argv: Arguments vector
 *
 * Return: Always 0, success 1
 * Description:
 * if arg count is incorrect, exit code 97
 * if file_from does not exist or cannot be read, exit code 98
 * if file_to cannot be created or written to, exit code 99
 * if file_to and file cannot be closed, exit code 100
 */

int main(int argc, char *argv[])
{
	 int file_from, file_to, r, w;
		char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");

		exit(97);
	}
	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Cant read from file  %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(file_to, buffer, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

			r = read(file_from, buffer, 1024);
				file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
