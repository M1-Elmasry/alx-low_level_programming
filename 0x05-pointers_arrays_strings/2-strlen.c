#include "main.h"

/**
 * _strlen - returns paramater length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
    int i, ch, len;

    i = 0;
    while(true)
    {
        ch = *(s+i);
        if (ch <= 0)
        {
            break;
        }
        i++;
        len++;
    }
    return (len - 1);
}
