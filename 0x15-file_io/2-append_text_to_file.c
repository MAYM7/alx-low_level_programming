#include "main.h"
#include <fcntl.h>

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file to append to
 * @text_content: The NULL-terminated string to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, result, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
		}
		result = write(fd, text_content, i);
		if (result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
