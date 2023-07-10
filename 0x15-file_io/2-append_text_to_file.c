#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text in the end
 * @filename: file to add to the end
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, c = 0;
	int curr;

	if (filename == NULL)
		return (-1);
	x = open(filename, O_WRONLY | O_APPEND);
	if (x == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[c])
			c++;
		curr = write(x, text_content, c);
		if (curr != c)
		{
			close(x);
			return (-1);
		}
	}
	close(x);
	return (1);
}
