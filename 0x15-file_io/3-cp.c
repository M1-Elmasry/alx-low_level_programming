#include "main.h"

char *_itoa(int n);

int main(int ac, char **av)
{
	size_t buff_size = 1024 * 3;
	int file_from, file_to;
	char *buffer = malloc(buff_size * sizeof(char));

	if (!buffer)
		return (0);

	if (ac > 3 || ac < 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(USAGE_ERROR);
	}

	file_from = open(av[1], O_RDONLY);
	if (read(file_from, buffer, buff_size) == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file ", 28);
		write(STDERR_FILENO, av[1], strlen(av[1]));
		write(STDERR_FILENO, "\n", 1);
		exit(READ_ERROR);

	}
	if (close(file_from) == -1)
	{
		write(STDERR_FILENO, "Error: Can't close fd ", 22);
		write(STDERR_FILENO, _itoa(file_from), strlen(_itoa(file_from)));
		write(STDERR_FILENO, "\n", 1);
		exit(CLOSE_ERROR);
	}

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (write(file_to, buffer, strlen(buffer)) == -1)
	{
		write(STDERR_FILENO, "Error: Can't write to ", 22);
		write(STDERR_FILENO, av[2], strlen(av[2]));
		write(STDERR_FILENO, "\n", 1);
		exit(WRITE_ERROR);
	}
	if (close(file_to) == -1)
	{
		write(STDERR_FILENO, "Error: Can't close fd ", 22);
		write(STDERR_FILENO, _itoa(file_to), strlen(_itoa(file_to)));
		write(STDERR_FILENO, "\n", 1);
		exit(CLOSE_ERROR);
	} close(file_to);

	free(buffer);

	return (0);
}

/**
 * _itoa - simple impelementation to itoa function
 * this function convert the int number to string number
 * @n: integer number
 * Return: pointer to the number after converted to string
 */
char *_itoa(int n)
{
	/**
	 * Maximum length of a signed 32-bit integer
	 * is 11 digits plus a null terminator
	 */
	char *s = malloc(12), c;
	int i = 0, sign = n, j;

	if (sign < 0)
		n = -n;

	do {
		s[i++] = n % 10 + '0';
	} while (n /= 10);

	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';

	for (j = 0; j < i / 2; j++)
	{
		c = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = c;
	}
	return (s);
}
