#include <stdio.h>
/**
 * main - Entry point
 * Description :'a program that finds and prints the sum of the even-valued terms'
 * Return: Always 
 */
int main(void)
{
	int i = 1;
	int j = 2;
	int d;
	int s = 2;

	while (j <= 4000000)
	{
		d = i + j;
		if (d % 2 == 0)
			s += d;
		i = j;
		j = d;
	}
	printf("%d\n", s);
	return (0);
}
