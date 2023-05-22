#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Positive or negative ? */

/**
 * main - Entry point
 * Description : 'A program to test if a number is positive or negative'
 * Return: Always 0
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else
	{
		if (n == 0)
			printf("%d is zero\n", n);
		else
			printf("%d is positive\n", n);
	}
	return (0);
}
