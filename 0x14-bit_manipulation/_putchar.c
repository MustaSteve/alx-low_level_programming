#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: The character tbe printed
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
