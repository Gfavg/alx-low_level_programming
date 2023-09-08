#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename - file to be read
 * @letters - number of letters it should read and print
 *
 * Return: 0-file cannot be opened or read, 0-filename->NULL, 0-write fails or does not write the expected amount of bytes, actual number of	 letters it could read and printon success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t b_read;
	ssize_t b_writen;
	char* buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close (fd);
		return (0);
	}
	b_read = read(fd, buf, letters);
	if (b_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	b_writen = write(STDOUT_FILENO, buf, b_read);
	if (b_writen == -1)
	{
		free (buf);
		close(fd);
		return (0);
	}

	free (buf);
	close (fd);
	return (b_writen);
}
