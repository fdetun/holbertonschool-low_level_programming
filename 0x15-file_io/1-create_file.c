#include "holberton.h"

/**
 * create_file - create_file
 * @filename: pointer of filename
 * @text_content: pointerof string
 * Return: -1 Or 1
 **/

int create_file(const char *filename, char *text_content)
{
int f, lenght, a;


if (filename == NULL)
return (-1);
f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (f == -1)
return (-1);
if (text_content == NULL)
return (1);
lenght = strlen(text_content);
a = write(f, text_content, lenght);
close(f);
if (a == -1)
return (-1);
return (1);
}
