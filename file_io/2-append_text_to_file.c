#include "main.h"

/**
* append_text_to_file - Short description
* @filename: Pointer vers Fichier
* @text_content: Pointer vers Contenu
*
* Description: Longer description
*
* Return: Value 1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1 || !filename)
	{
		return (-1);
	}
	if (text_content)
		write(fd, text_content, strlen(text_content));

	close(fd);
	return (1);
}
