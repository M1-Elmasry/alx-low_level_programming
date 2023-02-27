#include "main.h"

/**
<<<<<<< HEAD
 * _strlen - return length of string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int i, ch, len;

	i = 0;
	while (true)
	{
		ch = *(s + i);
		if (ch <= 0)
		{
			break;
		}
		i++;
		len++;
	}
	return (len);
=======
 * _strlen - returns paramater length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
    int i, ch, len;

    i = 0;
    while(1)
    {
        ch = *(s+i);
        if (ch <= 0)
        {
            break;
        }
        i++;
        len++;
    }
    return (len);
>>>>>>> cde7575a23bd6c797ab0389994afff1e0d33a72d
}
