#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Exactly 0
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora korpar, 2015-10-19\n";

	int len = sizeof(msg) - 1;

	write(STDERR_FILENO, msg, len);

	return (1);
}
