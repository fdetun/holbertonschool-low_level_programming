#include "holberton.h"
/**
 * read_textfile - read_textfile
 * @filename: pointer of filename
 * @letters: number of letter to write
 * Return: n OR 0
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
int a, c;
int n = 0;
char *stringg;

if (!filename)
return (0);
a = open(filename, O_RDONLY);
if (!a)
return (0);
stringg = malloc(sizeof(letters));
if (!stringg)
return (0);
n = read(a, stringg, letters);
if (!n)
return (0);
c = write(STDOUT_FILENO, stringg, n);
if (!c)
return (0);
close(a);
free(stringg);
return (n);
}
