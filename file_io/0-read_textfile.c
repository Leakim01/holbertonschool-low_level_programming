#include "main.h"

/**
* read_textfile - Short description
* @filename: Pointer vers Fichier
* @letters: Pointer vers String
*
* Description: Longer description
*
* Return: Value ??
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *p;

	p = malloc(sizeof(char) * letters);
	if (p == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	read(fd, p, letters);

	close(fd);
	return (write(STDOUT_FILENO, p, strlen(p)));
}
