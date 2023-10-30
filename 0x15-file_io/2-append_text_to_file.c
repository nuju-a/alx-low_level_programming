#include "main.h"

/**
  *append_text_to_file - function that appends text to end of file
  *@filename: pointer to file to be appended
  *@text_content: null terminated string of the file
  *
  *Return: 1 on success or -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdw, fdo, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fdo = open(filename, O_WRONLY | O_APPEND);
	fdw = write(fdo, text_content, len);

	if (fdo == -1 || fdw == -1)
		return (-1);

	close(fdo);

	return (1);
}
