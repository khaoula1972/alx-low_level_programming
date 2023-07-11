#include "main.h"
/**
 * main - Copies the content of a file to another file
 * @argc: The number of command-line argument
 * @argv: An array of strings
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_original, file_copy;
	ssize_t Read, Written;
	char buffer[BUF_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	/* rw-rw-r-- */

	/* Check the number of arguments */
	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);
	
	/* Open the source file for reading */
	file_original = open(argv[1], O_RDONLY);
	if (file_original == -1)
		error_exit("Error: Can't read from file", 98);

	/* Open or create the destination file for writing */
	file_copy = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (file_copy == -1)
		error_exit("Error: Can't write to file", 99);

	/* Copy the content from file_from to file_to */
	while ((Read = read(file_original, buffer, BUF_SIZE)) > 0)
	{
		Written = write(file_original, buffer, Read);
		if (Written == -1)
			error_exit("Error: Can't write to file", 99);
		if (Written != Read)
			error_exit("Error: Incomplete write operation", 99);
	}

	/* Check for read error or incomplete write operation */
	if (Read == -1)
		error_exit("Error: Can't read from file", 98);

	/* Close the file descriptors */
	if (close(file_original) == -1)
		error_exit("Error: Can't close file descriptor", 100);
	if (close(file_copy) == -1)
		error_exit("Error: Can't close file descriptor", 100);
	return (0);
}
