#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Returrn: On Success 1.
 * On error, -1 is returned , and errno is set appropriately.
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
