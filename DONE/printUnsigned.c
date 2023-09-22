#include "main.h"

/**
 *printUNSI - print digit thats of type integer
 *
 *@handle: the specifier to be used
 *@varys: va list
 *Return: the digit use
 */
int printUNSI(char handle, va_list varys)
{
	int use;

	use = 0;

	if (handle == 'u')
		use += printNum((long)(va_arg(varys, unsigned int)), 10);
	else
		 use = use + write(1, &handle, 1);
	return (use);
}

