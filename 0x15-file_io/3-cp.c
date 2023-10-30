#include <fcntl.h>
#include "main.h"

#define BUFFER_SIZE 1024
/**
 * error_message - Prints an error message and exits with a specific code
 * @message: The error message format
 * @arg: The argument to include in the error message
 */
void error_message(const char *message, const char *arg)
{
	dprintf(2, message, arg);
	exit(97);
}
/**
 * open_file - Opens a file with specified flags and permissions
 * @filename: The name of the file to open
 * @flags: The flags to use for opening the file
 * @permissions: The permissions to set for the file
 * Return: The file descriptor on success, exits on failure
 */
int open_file(const char *filename, int flags, int permissions)
{
	int fd = open(filename, flags, permissions);

	if (fd == -1)
	{
		error_message("Error: Can't read from file %s\n", filename);
	}
	return (fd);
}
/**
 * copy_file - Copies the content of one file to another
 * @fd_from: The source file descriptor
 * @fd_to: The destination file descriptor
 */
void copy_file(int fd_from, int fd_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE) > 0))
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(2, "Error: Can't write to file\n");
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file\n");
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}
/**
 * main - Entry point for the cp program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 on success, exits with error codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);

	copy_file(fd_from, fd_to);

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
