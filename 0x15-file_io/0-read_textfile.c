#include  "main.h"
#include "stdlib.h"

/**
 * read_textfile - reads text from file the prints it
 * @filename: name of file read
 * @letters: number of bytes to be read
 *
 * Return: number of bytes readed and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, bytes, t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);

	bytes = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);

	return (bytes);
}
