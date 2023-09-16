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
int Ourprintf(const char *format, ...);
int print_num(long int d, long int base);

/* Conversion specifier prototypes */
int printString(const char *str);
int printRev(const char *str);
int printCSR(va_list arg);

int printPercent(va_list args __attribute__((unused)));

int print_num(long int k, long int base);
int printInteger(va_list arg);
int printUnsign(long int k, long int base);
int printBases(va_list arg);

/**
* struct data - A structure for key-value pairs.
* @key: The key to search for.
* @func: The associated function to call.
*
* This structure defines key-value pairs used for mapping conversion specifiers
* to their corresponding functions.
*/
struct data
{
	const char *key;
	int (*func)();
};

/* Array of key-value pairs */
/**
 * data - An array of key-value pairs for printf functions.
 *
 * This array associates conversion specifiers (keys) with their corresponding
 * printf functions (values).
 */

#endif /* _MAIN_H_ */
