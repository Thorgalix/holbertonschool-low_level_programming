#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: content to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, wr, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	while (text_content[len])
		len++;

	wr = write(file, text_content, len);
	if (wr == -1 || wr != len)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
