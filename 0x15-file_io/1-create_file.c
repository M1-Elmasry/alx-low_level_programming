#include "main.h"

/**
 * create_file - function that create file and and write in it
 * @filename: filename
 * @text_content: text that will written in file
 * Return: 1 in success -1 in failure
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (!filename || !fp)
		return (-1);

	if (!text_content)
		return (1);

	while (text_content[i])
	{
		if (write(fp, &text_content[i++], 1) == -1)
			return (-1);
	}

	close(fp);
	return (1);
}
