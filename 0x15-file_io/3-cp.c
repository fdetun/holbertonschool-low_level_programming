#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main func
 * @argc: argc
 * @argv: argv
 * Return: 0.
 **/

int main(int argc, char const *argv[])
{
int file_to, file_from;
int a;
if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
if (file_to == -1)
{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while (read(file_from, &stock, 1))
write(file_to, &stock, 1);

return (0);
}
