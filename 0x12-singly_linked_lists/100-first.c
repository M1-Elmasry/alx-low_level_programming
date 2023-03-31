#include <stdio.h>

/**
 * exec_first - function that executed before main
 *
 * Return: nothing
 */
void exec_first() __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
