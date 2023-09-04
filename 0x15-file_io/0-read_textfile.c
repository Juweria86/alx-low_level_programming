#include "main.h"
/**
 * read_textfile -  reads a text file and prints it to the POSIX
 * standard output.
 * @filename: name of the being read
 * @letters: number of letters to be read
 * Return: wr
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fp;
	ssize_t wr;
	ssize_t t;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fp, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, t);
	free(buffer);
	close(fp);
	return (wr);

}
