#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: The name of the file to be read
 * @letters: The number of letters to read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer = malloc((letters + 1) * sizeof(char));
	ssize_t Read; /*Number of read bytes*/
	ssize_t Written; /*Number of written bytes*/

	if (filename == NULL)
	{
		free(buffer);
		return (0);
	}
	else
	{
		file = open(filename, O_RDONLY);
		if (file == -1)
			return (0); /*if file can't be opened or read */
		if (buffer == NULL)
		{
			close(file);
			return (0);
		}
		Read = read(file, buffer, letters);
		if (Read == -1)
		{
			free(buffer);
			close(file);
			return (0);
		}
		buffer[Read] = '\0';
		Written = write(STDOUT_FILENO, buffer, Read);
		free(buffer);
		close(file);
		if (Written != Read)
			return (0);
		return (Written);
	}
}
