#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - appedn text to a  file
 * @filename: pointer of filename
 * @text_content: NUll terminated string
 *
 * Return: 1 on sucess and -1 on failure, if filename is NUll
 * file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t n_wrote;

	if (filename == 0)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (filename)
	{

		while (text_content[len] != 0)
			len++;
		n_wrote = write(fd, text_content, len);
		if (n_wrote == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
