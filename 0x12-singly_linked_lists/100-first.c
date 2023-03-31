#include <stdio.h>

/**
 * exec_first - function that executed before main
 *
 * Return: nothing
 */
void __attribute__((constructor)) exex_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
