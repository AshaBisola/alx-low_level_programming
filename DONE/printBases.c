#include "main.h"

/**
 * printUphex - Function to print a number in a specified base.
 * @a: The number to be printed.
 * @base: The base in which to print the number.
 *
 * Return: The number of characters printed.
 */

int printUphex(long int a, long int base)
{
	int present = 0;

	if (a < 0)
	{
		write(1, "-", 1);
		a = -a;
	}

	if (a < base)
	{
		{
			present += _putchar(a + '0');
		}
	}
	else
	{
		present += printUphex((a / base), base);
		if ((a % base) < 10)
			_putchar((a % base) + '0');
		else
			CbaseL(a, base);

	}

	return (present);
}

/**
 * printBases - Print integer values in different bases.
 * @handle: A va_list containing the arguments.
 * @varys: va list
 * This function prints an integer value in binary, octal, or hexadecimal base
 * based on the 'base' specifier.
 *
 * Return: The number of characters printed.
 */
int printBases(char handle, va_list varys)
{
	int use = 0;

	if (handle == 'b')
		use = use + printNum((long)(va_arg(varys, unsigned int)), 2);
	else
	{
		switch (handle)
		{
			case 'o':
				use = use +  printNum((long)(va_arg(varys, unsigned int)), 8);
				break;
			case 'x':
				use = use +  printNum((long)(va_arg(varys, unsigned int)), 16);
				break;
			case 'X':
				use = use +  printUphex((long)(va_arg(varys, unsigned int)), 16);
				break;
			default:
				use = use + write(1, &handle, 1);
				break;
		}
	}
	return (use);
}
