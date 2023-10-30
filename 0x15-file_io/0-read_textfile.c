#include "main.h"

/**
  *read_textfile - reads text file and print it to the POSIX stdout
  *@filename: the file descriptor
  *@letters: the count size for the content of fd
  *
  *Return: numbers of letters or 0 if file cannot be opened
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fdo, fdr, fdw;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fdo = open(filename, O_RDONLY);
	fdr = read(fdo, buff, letters);
	fdw = write(STDOUT_FILENO, buff, fdr);

	if (fdo == -1 || fdr == -1 || fdw == -1 || fdw != fdr)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fdo);

	return (fdw);
}
