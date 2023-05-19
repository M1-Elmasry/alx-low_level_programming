#include "main.h"

/**
 * main - cp content of file to another file
 * @ac: number of argument
 * @av: argv
 * Return: 0 if success
 */
int main(int ac, char **av)
{
	size_t buff_size = 1024 * 3;
	int file_from, file_to;
	char *buffer = malloc(buff_size * sizeof(char));

	if (!buffer)
		return (0);

	if (ac > 3 || ac < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(USAGE_ERROR);
	}
	file_from = open(av[1], O_RDONLY);
	if (read(file_from, buffer, buff_size) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(READ_ERROR);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(CLOSE_ERROR);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (write(file_to, buffer, strlen(buffer)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(WRITE_ERROR);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(CLOSE_ERROR);
	}

	close(file_to);
	free(buffer);

	return (0);
}
