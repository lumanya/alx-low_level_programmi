#include "main.h"
/**
 * main - copies the content of one file to another file
 * @agc: argument count
 * @agv: argument vector
 *
 * Return: o on sucess on fialure exit with different status
 */
int main(int agc, char **agv)
{
	char buffer[1024];
	int  n_read, n_wrote, fd, fd1;

	if (agc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(agv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			agv[1]);
		exit(98);
	}
	fd1 = open(agv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant'y write to %s\n", agv[2]);
		exit(98);
		}
	while ((n_read = read(fd, buffer, 1024)) > 0)
	{
		n_wrote = write(fd1, buffer, n_read);
		if (n_wrote != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Cant'y write to0 %s\n",
				agv[2]);
			exit(99);
		}
	}
	close(fd1);
	close(fd);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d", fd);
		exit(100);
	}
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d", fd1);
		exit(100);
	}
	return (0);

}
