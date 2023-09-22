#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
char CbaseL(long int b, int base);
char SbaseL(long int b, int base);



/* Conversion specifier prototypes */
/* for letters*/
int printChar(int w);
int printString(char *b);
int printRev(char *d);
/* for numbers */
int printNum(long int b, long int base);

/* Prototypes used in the stuct*/
int printCSR(char handle, va_list varys);
int printDIG_INT(char handle, va_list varys);
int printBases(char handle, va_list varys);
int printUNSI(char handle, va_list varys);
int printPercent(char handle, va_list varys);

/**
 * struct mkstr - A structure for key-value pairs.
 * @key: The key to search for.
 * @func: The associated function to call.
 *
 * This structure defines key-value pairs used for mapping
 * conversion specifiers
 * to their corresponding functions.
 */

typedef struct mkstr
{
	const char key[4];
	int (*func)(char specifier, va_list varys);
} data;

#endif /* _MAIN_H_ */
