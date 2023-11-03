#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * print_error - print an error message to the standard error
 * @code: exit code
 * @msg: format string for error message
 * @arg: parameter is a string
 * 
 * Return: always 0;
 */
void print_error(int code, const char *msg, int arg)
{
	dprintf(2, msg, arg);
	exit(code);
}
/**
 * main - main function
 * @argc: count
 * @argv: vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to\n", 0);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", 0);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_error(99, "Error: Can't write to file %s\n", 0);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			print_error(99, "Error: Can't write to file %s\n", 0);
	}
	if (bytes_read == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", 0);
	}
	if (close(fd_from) == -1)
		print_error(100, "Error: Can't close fd %d\n", fd_from);
	if (close(fd_to) == -1)
		print_error(100, "Error: Can't close fd %d\n", fd_to);
	return (0);
}
