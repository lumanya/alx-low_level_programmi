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
	ssize_t n_read, n_wrote;

	char *buffer = malloc(sizeof(char) * letters + 1);

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	n_read = read(fd, buffer, letters);

	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[letters] = '\0';

	n_wrote = write(STDOUT_FILENO, buffer, n_read);
	if (n_wrote == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (n_read);
}
