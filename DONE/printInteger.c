#include "main.h"

/**
 * printNum - Function to print a number in a specified base.
 * @b: The number to be printed.
 * @base: The base in which to print the number.
 *
 * Return: The number of characters printed.
 */

int printNum(long int b, long int base)
{
	int use = 0;

	if (b < 0)
	{
		write(1, "-", 1);
		b = -b;
	}

	if (b < base)
	{
		{
			use += _putchar(b + '0');
		}
	}
	else
	{
		use += printNum((b / base), base);
		if ((b % base) < 10)
		_putchar((b % base) + '0');
		else
		SbaseL(b, base);

	}

	return (use);
}

/**
 *printDIG_INT - print digit thats of type integer
 *
 *@handle: the specifier to be used
 *@varys: va list
 *Return: the digit use
 */
int printDIG_INT(char handle, va_list varys)
{
	int use;

	use = 0;

	if (handle == 'i')
		use += printNum((long)(va_arg(varys, int)), 10);
	else if (handle == 'd')
		use += printNum((long)(va_arg(varys, int)), 10);
	else
		use = use + write(1, &handle, 1);
	return (use);
}
