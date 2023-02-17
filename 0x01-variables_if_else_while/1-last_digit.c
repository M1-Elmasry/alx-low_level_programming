#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - do many things
 * Return - 0 if code exist else 1
 */
int main(void)
{
	int n;
	char lnum;
	int l;
	char number[20];

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	sprintf(numbers, "%d", n);
	lnum = number[strlen(number) - 1];

	l = lnum - '0';
	if (number[0] == '-')
	{
		if (l == 0)
		{
			printf("Last digit of %s is %d and is zero\n", number, l);
		}
		else
		{
			printf("Last digit of %s is -%d and is less than 6 and not 0\n", number, l);
		}
	}
	else if (l == 0)
	{
		printf("Last digit of %s is %d and is 0\n", number, l);
	}
	else if (l < 6)
	{
		printf("Last digit of %s is %d and is less than 6 and not 0\n", number, l);
	}
	else if (l > 5)
	{
		printf("Last digit of %s is %d and is greater than 5\n", number, l);
	}
	return (0);
}
