#include "main.h"

/**
 * _puts - This function prints a string followed by a new line to stdout.
 * *str: Acts as a pointer to a string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
