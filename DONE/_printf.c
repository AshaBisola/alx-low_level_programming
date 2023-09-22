#include "main.h"
int _printf(const char *format, ...);
/**
 *  _printf - Replicate printf function.
 *  @format: A pointer that handles specifiers to be printed.
 *  Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	int use, i, j = 0;
	char a;

	data keys[5] = {
		{{"u"}, printUNSI}, {{'%'}, printPercent}, {{'d', 'i'}, printDIG_INT},
		{{'b', 'o', 'x', 'X'}, printBases}, {{'c', 'r', 's'}, printCSR}
	};
	va_list handle;

	va_start(handle, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			a = *(format + 1);
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 4; j++)
			{
					if (keys[i].key[j] == a)
					{
						use += keys[i].func(a, handle);
						break;
					}
				}
			}
			format++;
		}
		else
		{
			use = use + write(1, format, 1);
		}
		++format;
	}
	va_end(handle);
	return (use);
}
