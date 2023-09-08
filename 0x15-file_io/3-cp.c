#include "main.h"

#define BUF_SIZE 1024

/**main - copies the content of a file to another file
 * @argc - number of arguments
 * @argv - array of arguments
 *
 * Return - 0 on success, error code on failure
 */

int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	ssize_t read_bytes;
	ssize_t written_bytes;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[0]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}

	read_bytes = read(file_from, buf, sizeof(BUF_SIZE));
	while (read_bytes > 0)
	{
		written_bytes = write(file_to, buf, read_bytes);
		if (written_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}

	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
		return (98);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		return (100);
	}
	if (close(file_to)== -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		return (100);
	}
	return (0);
}
