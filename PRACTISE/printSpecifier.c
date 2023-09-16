#include "main.h"

/**
 * printSpecifier - Print based on the provided specifier.
 * @specifier: The specifier character.
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */
int printSpecifier(char specifier, va_list args)
{
	int use = 0;

	if (specifier == 'c' || specifier == 's' || specifier == 'r')
	{
		use += printCSR(va_list args);
	}
	else if (specifier == 'i' || specifier == 'd')
	{
		use += printInteger(va_arg(args, int));
	}
	else if (specifier == 'u')
	{
		use += printUnsign(va_arg(args, signed int));
	}
	else if (specifier == 'b' || specifier == 'o' || specifier == 'x')
	{
		use += printBase(va_arg(args, signed int), specifier);
	}
	else if (specifier == 'X')
	{
		use += printBase(va_arg(args, signed int), specifier);
	}
	else if (specifier == '%')
	{
		use += printPercent(args);
	}
	else
	{
		char c = specifier;

		use += write(1, &c, 1);
	}
	return (use);
}
