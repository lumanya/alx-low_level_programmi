#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - create file
 * @filename: name of the file
 * @text_content:  NULL terminated  string to write to afile
 *
 * Return: on success 1, -1 on failure when cant create file, write file
 * file aleady exusts
 */
int create_file(const char *filename, char *text_content)
{

	int fd, len = 0;
	ssize_t n_wrote;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);

	if (fd == -1)
	{

		close(fd);
		return (-1);
	}
	if (text_content)
	{
		while (text_content[len] != 0)
			len++;
		n_wrote = write(fd, text_content, len);

		if (n_wrote == -1)
		{

			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
