#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**append_text_to_file - Appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to add to the end of the file
 * Return: 1 on success and -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int b_writen;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while(text_content[len])
			len++;

		b_writen = write(fd, text_content, len);
		if (b_writen == -1)
		{
			close (fd);
			return (-1);
		}

	}

	close (fd);
	return (1);
}
