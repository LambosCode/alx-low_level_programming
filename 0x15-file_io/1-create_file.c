#include "main.h"

/**
 * create_file - creates and writes and check a file on disk
 * @filename: name of file to be created
 * @text_content: buffers to and saves to file name
 * Return: number of words written.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, cnt = 0;

	if (filename == 0)
		return (-1);

	fd = open(filename, O_RDWR);
	if (fd < 0)
	{
		fd = creat(filename, 0600);

		if (fd == -1)
			return (-1);

		if (!text_content)
			return (1);

		while (text_content[cnt++] != 0)
			;
		cnt = write(fd, text_content, (cnt - 1));
	}

	close(fd);
	return (1);
}
