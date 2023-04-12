#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFSIZE 1024

int main(int argc, char *argv[])
{
	int fd_from, fd_to, ret;
	char buf[BUFSIZE];
	ssize_t bytes_read, bytes_written;
	struct stat st;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	ret = fstat(fd_from, &st);
	if (ret == -1)
	{
		perror("fstat");
		exit(99);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, st.st_mode & 0777);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	while ((bytes_read = read(fd_from, buf, BUFSIZE)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written == -1)
		{
			perror("write");
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		perror("read");
		exit(98);
	}

	ret = close(fd_from);
	if (ret == -1)
	{
		perror("close");
		exit(100);
	}

	ret = close(fd_to);
	if (ret == -1)
	{
		perror("close");
		exit(100);
	}

	return (0);
}
