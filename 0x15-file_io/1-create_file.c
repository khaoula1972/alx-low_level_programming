#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: The name of the file to create
 * @text_content: The text content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t Written;
	int permissions = S_IRUSR | S_IWUSR; /* rw------- */

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		Written = write(file, text_content, strlen(text_content));
		if (Written == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (-1);
}
