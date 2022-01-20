#include "main.h"

int main(int ac, char **av)
{
	int rm = 1025, fd, err = 0;
	char *charcs = malloc(rm);
	char *mint = 0;

	if (!charcs || ac <= 2)
		return (-1);

	fd = open(av[1], O_RDWR);

	if (fd == -1)
		return (-1);
	rm = 0;

	while (err != -1)
	{
		err = read(fd, charcs, 1024);
		rm += err;
		if (err == 0)
			break;
		charcs = str_remake(charcs, rm);
	}
	mint = charcs - rm;
	create_file(av[2], mint);
	close(fd);

	write(1, mint, rm);
	free(mint);
	return (0);
}
