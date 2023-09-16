#include "main.h"
/**
 * Ourprintf - Custom printf function.
 * @format: A pointer that handles specifiers to be printed.
 * struct data  - An array of key-value pairs for printf functions.
 * Return: The number of characters printed.
 */



int Ourprintf(const char *format, ...)
{
	int use = 0;
	int i = 0;
	const char *a;
	
	struct data keys[] = {
		{"c", printCSR}, {"s", printCSR}, {"r", printCSR}, {"%", printPercent},
		{"d", printInteger}, {"u", printUnsign}, {"i", printInteger},
		{"b", printBases}, {"o", printBases}, {"x", printBases}, {"X", printBases}
	};

	va_list arg;

	va_start(arg, format);

	while (*format != '\0')
	{
		if (!format || (format[0] == '%')
				&& (format[i + 1] == ' ' || !format[1]))
			return (-1);
		if (*format == '%')
			a = format + 1;
		for (int i = 0; keys[i].key != NULL; i++)
		{
			if (strcmp(keys[i].key, a) == 0)
			{
				use = keys[i].func(); /*Call function linked with the key*/
			}
			else
				use = use + write(1, format, 1);
		}
	}
	++format;
	va_end(arg);

	return (use);
}
