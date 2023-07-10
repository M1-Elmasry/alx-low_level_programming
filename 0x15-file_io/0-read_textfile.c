#include "main.h"

/**
 * read_textfile - read the content of file and print it to stdout
 * @filename: file
 * @letters: number of letters you want to read it from @filename
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc((letters));

	if (!buffer)
		return (0);

	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	close(fd);
	free(buffer);

	return (w);
}
