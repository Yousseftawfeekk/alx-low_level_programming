#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for buffer.
 * @file: The name of the file buffer is to store char
 *
 * Return: pointer to the new -allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Cannot write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - close file descriptor.
 * @fd: The file descriptor to be closed.
 */

void close_file(int fd)
{
	short cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copy the content of a file to another file
 * @argc: The number of argument supplied to the program.
 * @argv: An array of pointer to the arguments.
 *
 * Return: 0 on Success
 *
 * Description: If the argument count is incorrect exit code 97.
 * if file_from does not exist or cannot be read exit code 98.
 * if file_to cannot be created or written  exit code 99.
 * if file_to or file_from cannot be closed exit code 100.
 */

int main(int argc, char *argv[])
{
	int from, to, readd;
	short bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	readd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || readd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		bytes = write(to, buffer, readd);
		if (to == -1 || bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		readd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (readd > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
