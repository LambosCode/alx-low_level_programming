#include "main.h"

/**
 * append_text_to_file - creates and writes and check a file on disk
 * @filename: name of file to be created
 * @text_content: buffers to and saves to file name
 *
 * Return: number of words written.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, cnt = 0;

	if (filename == 0)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	while (text_content && text_content[cnt++] != 0)
		;
	write(fd, text_content, (cnt - 1));

	close(fd);
	return (cnt);
}
