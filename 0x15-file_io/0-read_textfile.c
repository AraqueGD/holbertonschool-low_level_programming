#include "holberton.h"

/**
 * read_textfile - check the code for Holberton School students.
 * @filename: File name.
 * @letters: Count Letters.
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _bytes, fd, idx = 0;
	char *buff = NULL;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	_bytes = read(fd, &buff[idx], 1);
	while (((size_t)idx <= letters - 1) && (_bytes != 0))
	{
		write(STDOUT_FILENO, &buff[idx], 1);
		idx++;
		_bytes = read(fd, &buff[idx], 1);
	}
	close(fd);
	free(buff);
	return (idx);
}
