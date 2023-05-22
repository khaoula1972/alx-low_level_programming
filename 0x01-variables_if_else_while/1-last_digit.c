#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* The last digit */

/**
 * main - Entry point
 * Description : 'Printing the last digit'
 * Return: The output
 */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	printf("Last digit of %d is %d", n, d);
	if (d > 5)
		printf(" and is greater than 5\n");
	else
	{
		if (d == 0)
			printf(" and is 0\n");
		else
			printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
