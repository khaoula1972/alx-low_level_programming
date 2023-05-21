#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : 'Prints size of types'
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;
	int in;
	long int lgint;
	long long int lglgint;
	float flt;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(ch));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(in));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(lgint));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(lglgint));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(flt));
	return (0);
}
