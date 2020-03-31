#include "holberton.h"

/**
 * create_file - create_file
 * @filename: pointer of filename
 * @text_content: pointerof string
 * Return: -1 Or 1
 **/

int create_file(const char *filename, char *text_content)
{
int fd, lenght, a;

lenght = strlen(text_content);
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
a = write(fd, text_content, lenght);
if (a == -1)
return (-1);
close(fd);
return (1);
}
