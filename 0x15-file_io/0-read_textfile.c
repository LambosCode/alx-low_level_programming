#include "main.h"

/**
 * read_textfile - read files from a disk storage location
 * @filename: name of file in disk location
 * @letters: number of words to read from.
 * Return: number of words printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, cnt = 0;
	ssize_t sz;
	char *phrase = malloc(sizeof(char) * letters);

	if (filename == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	sz = read(fd, phrase, letters);
	if (sz < 0 || !phrase)
		return (0);

	while (phrase[cnt] != 0)
		_putchar(*(phrase + cnt++));

	close(fd);
	free(phrase);

	return ((ssize_t)cnt);
}
