#include "main.h"

/**
 * _puts_recursion -> this is a function to print string recursivly
 * @s: string parameter
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
