#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/syscall.h>
/**
 * main - Entry point
 *
 * Description : Printing without printf or puts
 *
 * Return: Always 1
 */
int main(void)
{
	char g[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(STDERR_FILENO, g, sizeof(g) - 1);
	return (1);
}
