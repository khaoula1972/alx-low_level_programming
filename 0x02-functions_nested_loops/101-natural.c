#include <stdio.h>
/**
 * main - Entry point
 * Description : 'computes and prints the sum of all the multiples of 3 or 5'
 */
int main (void)
{
	int i = 3;
	int s = 0;

	while (i < 1024)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
		{
			s += i;
		}
		i++;
	}
	printf("%d\n", s);
	return (0);
}
