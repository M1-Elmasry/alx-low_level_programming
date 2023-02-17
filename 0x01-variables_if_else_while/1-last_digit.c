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
	int l_num;
	char numbers[20];

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	sprintf(numbers, "%d", n);
	lnum = numbers[strlen(numbers)-1];

	l_num = lnum - '0';
	if (numbers[0] == '-')
	{	
		if (l_num == 0)
		{
			printf("Last digit of %s is %d and is zero\n", numbers, l_num);
		}
		else
		{
			printf("Last digit of %s is -%d and is less than 6 and not 0\n", numbers, l_num);
		}
	}
	else if (l_num == 0)
	{
		printf("Last digit of %s is %d and is 0\n", numbers, l_num);
	}
	else if (l_num < 6)
	{
		printf("Last digit of %s is %d and is less than 6 and not 0\n", numbers, l_num);
	}
	else if (l_num > 5)
	{
		printf("Last digit of %s is %d and is greater than 5\n", numbers, l_num);
	}
	return (0);
}
