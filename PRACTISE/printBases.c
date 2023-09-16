#include "main.h"

/**
 * printBases - Print integer values in different bases.
 * @arg: A va_list containing the arguments.
 *
 * This function prints an integer value in binary, octal, or hexadecimal base
 * based on the 'base' specifier.
 *
 * Return: The number of characters printed.
 */
int printBases(va_list arg)
{
	int use = 0;
	int base = va_arg(arg, int);
	long int z = va_arg(arg, long int);

	if (base == 'b')
		use = printUnsign(z, 2);
	else if (base == 'o')
		use += printUnsign(z, 8);
	else if (base == 'x')
		use += printUnsign(z, 16);
	else if (base == 'X')
		use += printUnsign(z, 16);
	else
		use += printUnsign(z, base);
	return (use);
}
