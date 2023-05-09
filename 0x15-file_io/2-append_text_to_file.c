#include "main.h"

/**
 * append_text_to_file - function that append text to file
 * @filename: filename
 * @text_content: text that will written in file
 * Return: 1 in success -1 in failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int fp = open(filename, O_RDWR | O_APPEND, 0664);

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
