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
	FILE *file;
	char buffer[letters + 1];
	size_t Read; /*Number of read bytes*/
	ssize_t Written; /*Number of written bytes*/

	if (filename == NULL)
		return (0);
	else
	{
		file = fopen(filename, "r");
		if (file == NULL)
			return (0);
		Read = fread(buffer, sizeof(char), letters, file);
		if (Read == 0)
		{
			fclose(file);
			return (0);
		}
		buffer[Read] = '\0';
		Written = printf("%s", buffer);
		fclose(file);
		if (Written != Read)
			return (0);
		return (bytesWritten);
	}
}
