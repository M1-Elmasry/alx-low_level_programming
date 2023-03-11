#include "main.h"

/**
 * compare - compare beginning and end of string
 * @beg: position from start moving right
 * @end: position from end moving left
 * Return: 1 if palindrome, 0 if not
 */

int compare(char *beg, char *end)
{
	if (beg >= end)
		return (1);
	if (*beg == *end)
		return (compare(beg + 1, end - 1));
	return (0);
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (compare(s, (s + len - 1)));
}
