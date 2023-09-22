#include "main.h"

/**
 * CbaseL - Function to print a number to upper case.
 * @b: The number to be converted.
 * @base: The base in which to print the number.
 * Return: The number of characters printed.
 */
char CbaseL(long int b, int base)
{
	char result;

	switch (b % base)
	{
		case 10:
			result = _putchar('A');
			break;
		case 11:
			result = _putchar('B');
			break;
		case 12:
			result = _putchar('C');
			break;
		case 13:
			result = _putchar('D');
			break;
		case 14:
			result = _putchar('E');
			break;
		case 15:
			result = _putchar('F');
			break;
	}
	return (result);
}

/**
 * SbaseL - Function to print a number to lower case.
 * @b: The number to convert.
 * @base: The base in which the number is printed.
 * Return: The number of characters printed.
 */
char SbaseL(long int b, int base)
{
	char output;

	switch (b % base)
	{
		case 10:
			output = _putchar('a');
			break;
		case 11:
			output = _putchar('b');
			break;
		case 12:
			output = _putchar('C');
			break;
		case 13:
			output = _putchar('d');
			break;
		case 14:
			output = _putchar('e');
			break;
		case 15:
			output = _putchar('f');
			break;
	}
	return (output);
}

