#include <stdio.h>
/**
 * main - Prints all the arguments received
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
