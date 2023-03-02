char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	i = 0;
	dest_len = 0;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}

	while (1)
	{
		if (*(src + i) != '\0')
		{
			*(dest + dest_len + i) = *(src + i);
		}
		else
		{
			break;
		}
	}
	return (dest);
}

