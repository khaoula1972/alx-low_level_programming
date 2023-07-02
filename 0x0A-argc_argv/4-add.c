#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds two numbers.
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 1 if ther'es error, the results if not
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *element;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		element = argv[i];
		j = 0;
		while (element[j] != '\0')
		{
			if (element[j] < '0' || element[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(element);
	}
	printf("%d\n", sum);
	return (0);
}
