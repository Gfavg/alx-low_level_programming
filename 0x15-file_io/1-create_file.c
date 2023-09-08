#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**create_file- creates a file
 * @filename - name of the file to create
 * @text_content -  a NULL terminated string to write to the file
 *
 * Return: 1- on succcess, -1- on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int b_writen;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		b_writen = write(fd, text_content, len);
		if (b_writen == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close (fd);
	return (1);
}
