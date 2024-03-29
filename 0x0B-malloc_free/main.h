#ifndef MAIN_H
#define MAIN_H

char _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
int len(char *str);
int num_words(char *str);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
#endif
