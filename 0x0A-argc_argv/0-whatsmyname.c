#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of command listed
 * Return: 0 for Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
