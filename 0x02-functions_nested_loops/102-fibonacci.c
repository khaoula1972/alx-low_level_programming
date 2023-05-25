#include <stdio.h>
/**
 * main - Entry point
 * Description : 'Fibonacci numbers'
 * Return: Always 0
 */
int main(void)
{
	long int i = 1;
	long int j = 2;
	long int d = 1;
	int n = 0;
	
	printf("%ld, ", (long int)i);
	printf("%ld, ", (long int)j);
	while (n < 46)
	{
		d = j + i;
		printf("%ld, ", (long int)d);
		i = j;
		j = d;
		n++;
	}
	d = j + i;
	printf("%ld\n", (long int)d);
	return (0);
}
