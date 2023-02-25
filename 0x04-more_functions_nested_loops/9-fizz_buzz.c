#include <stdio.h>

/**
 * main - prints number from 1 to 100 and replace to number which
 * maltiples of three by "Fizz" and numbers maltiples of five by "Buzz"
 * and maltiples of three and five by "FizzBuzz" 
 * Return: 0 if code exist else 1
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if ( i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
