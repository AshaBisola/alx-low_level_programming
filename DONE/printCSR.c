#include "main.h"

/**
 * printString - to print string
 * @b: the string
 *
 * Return: return the string
 */

int printString(char *b)
{
	int use = 0;
	int i = 0;

	while (b[i] != '\0')
	{
		_putchar(b[i]);
		++use;
		++i;
	}
	return (use);
}

/**
 * printRev - print string in reverse
 * @d: the string to print in reverse
 *
 * Return: the reversed string
 */
int printRev(char *d)
{
	int use;

	use = 0;

	if (*d != '\0')
	{
		printRev(d + 1);
		++use;
		use += _putchar(*d);
	}
	return (use);
}

/**
 * printChar - print char
 * @w: argument
 *
 * Return: 0 if successful
 */
int printChar(int w)
{
	_putchar(w);
	return (1);
}

/**
 * printCSR - Print characters, strings, or reverse strings based on specifier.
 * @handle: The specifier ('c', 's', or 'r').
 * @varys: va list
 * Return: The number of characters printed.
 */
int printCSR(char handle, va_list varys)
{
	int use = 0;

	if (handle == 'c')
	{
		use = use + printChar(va_arg(varys, int));
	}
	else
	{
		switch (handle)
		{
			case 's':
				use = use + printString(va_arg(varys, char*));
				break;
			case 'r':
				use = use + printRev(va_arg(varys, char*));
				break;
			default:
				use = use + write(1, &handle, 1);
				break;
		}
	}
	return (use);
}
