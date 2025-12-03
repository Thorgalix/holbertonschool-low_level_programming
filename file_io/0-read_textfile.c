#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buf;
	ssize_t n_read, n_written;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
		close(file);
		return (0);
	}
	n_read = read(file, buf, letters);
	if (n_read == -1)
	{
		free(buf);
		close(file);
		return (0);
	}
	n_written = write(STDOUT_FILENO, buf, n_read);
	if (n_written != n_read)
	{
		free(buf);
		close(file);
		return (0);
	}
	free(buf);
	close(file);
	return (n_written);
}
