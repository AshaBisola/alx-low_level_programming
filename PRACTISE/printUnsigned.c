#include "main.h"

/**
 * printUnsign - Print an unsigned integer in a specified base.
 * @arg: A va_list containing the arguments.
 * It should contain an unsigned integer.
 *
 * This function prints an unsigned integer @k in the specified @base.
 * It handles different bases, including hexadecimal when @base is 16.
 *
 *
 *
 * Return: The number of characters printed.
 */

int printUnsign(long int k, long int base)
{
	int count = 0;

	if (k < 0)
	{
		k = -k;
		/* count++; // Commented out to prevent dead code */
	}

	if (k < base)
	{
		if (base == 16)
		{
			_putchar(k < 10 ? k + '0' : k - 10 + 'A');
			count++;
		}
		else
		{
			_putchar(k + '0');
			count++;
		}
	}
	else
	{
		count += printUnsign((k / base), base);
		_putchar(k % base + '0');
		count++;
	}

	return (count);
}
