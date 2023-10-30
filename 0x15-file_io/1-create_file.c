#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string to be tested
 *
 * Return: Length
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0' ; l++)
		;

	return (l);
}
/**
* create_file - Create a file
* @filename: Name of the file
* @text_content: Text content to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, chars_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		chars_written = write(fd, text_content, len);

		if (chars_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
