#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	char c;
	FILE *fp = fopen(filename, "r");

	if (!filename)
		return (0);

	if (!fp)
		return (0);

	for (i = 0; i < (int)letters; i++)
	{
		c = getc(fp);

		if (c == EOF)
		{
			break;
		}
		else if (write(1, &c, 1) == -1)
		{
			return (0);
		}
	}
	return (i);
}
