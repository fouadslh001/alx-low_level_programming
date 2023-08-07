#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * create_file -this ffunction well help to Creates a file.
 * in the standard output.
 * @filename: the Name of the file to we want to create.
 * @text_content: this is NULL terminated string to write to the file.
 * Return: 1 on success, or -1 on failure the processe.
 */


int create_file(const char *filename, char *text_content)
{
	int fd, lenght;
	ssize_t res_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		lenght = 0;
		while (*(text_content + lenght) != '\0')
			lenght++;
		res_write = write(fd, text_content, lenght);
		if (res_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
