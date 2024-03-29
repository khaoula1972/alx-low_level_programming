#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - Entry point to rpints the opcodes
 * @argc: The number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 1 if fails
 */
int main(int argc, char **argv)
{
	int i, b;
	unsigned char *main_opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		return (2);
	}
	main_opcodes = (unsigned char *)main;
	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", main_opcodes[i]);
			break;
		}
		printf("%02hhx ", main_opcodes[i]);
	}
	return (0);
}
