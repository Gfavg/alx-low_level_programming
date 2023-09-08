#include <elf.h>
#include "main.h"

/**disp_err - displays error message
 * @msg - pointer to msg to be displayed
 *
 * Return - nothing
 */
void disp_err(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}
/**
 * disp_elf_hdr - display the ELF header information
 * @ head - pointer to an Elf64_Ehdr
 *
 */
void disp_elf_hdr(Elf64_Ehdr *head)
{
}
/**
 * main - entry point of the program.
 * @argc - argument count
 * @argv - argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t b_read;

	if (argc != 2)
	{
		fprintf(stderr, "Use: %s elf_fname\n", argv[0]);
		return (98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return (98);
	}

	Elf64_Ehdr hdr;
	b_read = read(fd, &hdr, sizeof(hdr));
	if  (b_read == -1)
	{
		perror("read");
		close(fd);
		return (98);
	}
	if (b_read != sizeof(hdr) || hdr.e_ident[EI_MAG0] != )
}
