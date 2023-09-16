#include "main.h"

/**
 * print_num - Function to print a number in a specified base.
 * @k: The number to be printed.
 * @base: The base in which to print the number.
 *
 * Return: The number of characters printed.
 */

int print_num(long int k, long int base)
{
	int count = 0;

	if (k < 0)
	{
		_putchar('-');
		k = -k;
		count++;
	}
	else if (k < base)
	{
		if (base == 16)  /* Assuming hexadecimal base */
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
		count += print_num(k / base, base);
	}

	_putchar(k % base < 10 ? k % base + '0' : k % base - 10 + 'A');
	count++;

	return (count);
}

/**
 * printInteger - Function to print a signed integer in base 10.
 * @arg: The integer to be printed.
 *
 * Return: The number of characters printed.
 */
int printInteger(va_list arg)
{
	int a = va_arg(arg, int);

	return (print_num(a, 10));
}
