#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The text content to add to the file
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t Written;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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
	if (close(file) == -1)
		return (-1);
	return (1);
}
