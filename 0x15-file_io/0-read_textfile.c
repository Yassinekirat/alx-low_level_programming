#include "main.h"

/**
*read_textfile - function that reads a text file and prints
*  it to the POSIX standard output.
*
* @filename: The name of the file.
* @letters:  the number of letters it should read and print
*
*Return: The actual number of characters read and printed
* if the file can not be opened or read, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t letters_read;
	ssize_t letters_written;
	int fd;

	fd = open(filename, O_RDONLY);
	letters_read = read(fd, buffer, letters);

	if (!filename)
		return (0);

	if (fd == -1)
		return (0);

	if (!buffer)
		return (0);

	if (letters_read == -1)
		return (0);

	letters_written = write(STDOUT_FILENO, buffer, letters_read);
	if (letters_written == -1)
		return (0);

	if (letters_written != letters_read)
		return (0);

	free(buffer);
	close(fd);

	return (letters_written);
}
