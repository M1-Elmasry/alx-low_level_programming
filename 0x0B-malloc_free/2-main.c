#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;
    char *ss;
    char *sss;

    s = str_concat("Betty ", "Holberton");
    ss = str_concat(NULL, "Hello");
    sss = str_concat(NULL, NULL);


    if (s == NULL || ss == NULL || sss == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    printf("%s\n", ss);
    printf("%s\n", sss);

    free(s);
    return (0);
}
