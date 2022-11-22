#include "main.h"

/**
* create_file - Short description
* @filename: Pointer vers Fichier
* @text_content: Pointer vers Contenu
*
* Description: Longer description
*
* Return: Value ??
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1 || !filename)
	{
		return (-1);
	}
	if (text_content)
		write(fd, text_content, strlen(text_content));

	close(fd);
	return (1);
}
