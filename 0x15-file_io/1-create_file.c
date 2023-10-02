#include "main.h"
#include <string.h>

/**
 * create_file - Create a file
 * @filename: name of file to create
 * @text_content: String to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		w = write(fd, text_content, strlen(text_content));
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
