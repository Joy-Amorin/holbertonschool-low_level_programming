#include "main.h"

/**
* read_textfile -  reads a text file and prints it to the POSIX standard output
* @filename: file name
* @letters:number of letters it should read and prin
*
* Return: returns the actual number of letters it could read and print
* if the file can not be opened or read, return 0
* if filename is NULL return 0
* if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int w = 0;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(letters + 1));

	if (buf == NULL)
		return (0);
	read(fd, buf, letters);
	buf[letters + 1] = '\0';
	close(fd);

	fd = open(filename, O_WRONLY);
	if (fd == -1)
		return (0);
	w = write(fd, stdout, letters);
	if (w == -1)
		return (0);
	close(fd);
	free(buf);


	return (letters);

}
