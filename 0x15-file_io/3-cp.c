#include "main.h"

#define BUFFERSIZE 1024
/**
* main - copies the content of a file to another file.
*
* @argc: argument count.
* @argv: argument vector.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int fd_in, fd_out;
	int chars_read, chars_written;
	int file_closed, file2_closed;
	char *buffer[BUFFERSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_in = open(argv[1], O_RDONLY);
	if (fd_in < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_out = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_out == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((chars_read = read(fd_in, buffer, 1024)) > 0)
	{
		chars_written = write(fd_out, buffer, chars_read);
		if (chars_written != chars_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (chars_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_closed = close(fd_in);
	if (file_closed != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_in), exit(100);
	file2_closed = close(fd_out);
	if (file2_closed != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_out), exit(100);
	return (0);
}
