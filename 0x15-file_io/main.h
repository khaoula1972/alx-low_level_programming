#ifndef MAIN_H
#define MAIN_H

/* Needed libraries */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * error_exit - Prints an error message
 * @msg: The error message to print
 * @exit_code: The exit code to return
 */
void error_exit(const char *msg, int exit_code)
{
	while (*msg)
		putchar(*msg++);
	putchar('\n');
	exit(exit_code);
}

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);

#endif
