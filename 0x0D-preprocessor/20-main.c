#include <unistd.h>

char _putchar(char c);

/**
 * _putchar - reimpelmetation to putchar function in standard library
 * @c: character
 * Return: write @c to stdout
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * main - print current file name
 * Return: 0 if success else 1
 */
int main(void)
{
	char *file_name;
	int i;

	file_name = __FILE__;

	i = 0;
	for (i = 0; file_name[i] != '\0'; i++)
	{
		_putchar(file_name[i]);
	}
	_putchar('\n');
	return (0);
}
