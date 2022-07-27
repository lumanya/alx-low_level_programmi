#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - read text file and prints it to the snadard output
 * @filename: pointer to file name
 * @letters: ncount of lettrs in a file to be read
 *
 * Return: actual number of letters it shoul read and print,0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t size;

	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);
	size = read(fd, buffer, letters);

	write(STDOUT_FILENO, buffer, letters);

	close(fd);

	return (size);
}
