#include "main.h"

/**
 * printPercent - Print a percent symbol.
 * @handle: the character
 * @varys: the list
 * Return: Always returns 1 (the number of characters printed).
 */

int printPercent(char handle, va_list varys)
{
	int use = 0;
	(void)handle;
	(void)varys;

	use = _putchar('%');
	return (use);
}
